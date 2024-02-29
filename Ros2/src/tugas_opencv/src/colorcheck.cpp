#include <iostream>
#include <opencv2/opencv.hpp>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

#include <rclcpp/rclcpp.hpp>
#include "tugas_opencv/msg/color.hpp"
#include "tugas_opencv/msg/position.hpp"
#include "cv_bridge/cv_bridge.h"

using namespace std::chrono_literals;
using std::placeholders::_1;
using namespace cv;
using namespace std;

auto frameDetect = tugas_opencv::msg::Color();
auto colorPosition = tugas_opencv::msg::Position();
Scalar BLUE = Scalar(255,178,50);
Scalar YELLOW = Scalar(0,255,255);
Scalar RED = Scalar(0,0,255);

Point redPos;
Point bluePos;
Point yellowPos;
Mat frame;

class Color_ : public rclcpp::Node
{
     public: Color_()
     : Node("check")
     {
          publish_ = this->create_publisher<tugas_opencv::msg::Color>("colordetect", 10);
          publishColor_ = this->create_publisher<tugas_opencv::msg::Position>("positiondetect", 10);
     }

     void publish_func()
          {
               publish_->publish(frameDetect);
               publishColor_->publish(colorPosition);
               RCLCPP_INFO(this->get_logger(), "Red: %d\nGreen: %d\n Blue: %d", frameDetect.red,frameDetect.green, frameDetect.blue);
               RCLCPP_INFO(this->get_logger(), "%d %d", redPos.x, redPos.y);
               RCLCPP_INFO(this->get_logger(), "%d %d", bluePos.x, bluePos.y);
               RCLCPP_INFO(this->get_logger(), "%d %d", yellowPos.x, yellowPos.y);
          }
          
     private:
     

     rclcpp::TimerBase::SharedPtr timer_;
     rclcpp::Publisher<tugas_opencv::msg::Color>::SharedPtr publish_;
     rclcpp::Publisher<tugas_opencv::msg::Position>::SharedPtr publishColor_;
};

void tidy(Mat chosen_frame){
     erode(chosen_frame, chosen_frame, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );
     dilate(chosen_frame, chosen_frame, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) ); 

     dilate(chosen_frame, chosen_frame, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) ); 
     erode(chosen_frame, chosen_frame, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );
}

Point boundBox(Mat &hsvFrame, Scalar color){
     vector<vector<Point>> contours;
     vector<Vec4i> hierarchy;
     Point center_point;
     int max = 0;

     findContours(hsvFrame, contours, hierarchy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);

     for (size_t i = 0; i<contours.size(); i++){
          Rect boundRect = boundingRect(contours[i]);

          int size_ = boundRect.height * boundRect.width;
          if (size_ > 5000 && size_ > max){
          max = size_;
          rectangle(frame, boundRect.tl(), boundRect.br(), color, 2);
          center_point.x = boundRect.x + boundRect.width/2;
          center_point.y = boundRect.y + boundRect.height/2;
          }
     }

     return center_point;
}



int main(int argc, char** argv){
    rclcpp::init(argc,argv);
    auto color_node = std::make_shared<Color_>();
    

     VideoCapture camera(0);

     if (!camera.isOpened()){
          cout <<"Camera cannot be opened."<<endl;
          return 0;
     }

     int floorH = 0;
     int ceilingH = 179;

     int floorS = 0;
     int ceilingS = 255;

     int floorV = 0;
     int ceilingV = 255;

     namedWindow("HSV Control", WINDOW_NORMAL);

     createTrackbar("H Floor", "HSV Control", &floorH, 179);
     createTrackbar("H Ceiling", "HSV Control", &ceilingH, 179);

     createTrackbar("S Floor", "HSV Control", &floorS, 255);
     createTrackbar("S Ceiling", "HSV Control", &ceilingS, 255);

     createTrackbar("V Floor", "HSV Control", &floorV, 255);
     createTrackbar("V Ceiling", "HSV Control", &ceilingV, 255);

     

     while (1){
          frameDetect.red = 0;
          frameDetect.blue = 0;
          frameDetect.green = 0;

          colorPosition.x_pos = 0;
          colorPosition.y_pos = 0;

          
          
          if (!camera.read(frame)){
               cout<<"Frame cannot be read."<< endl;
               break;
          }
          

          Mat frameHSV;
          cvtColor(frame, frameHSV, COLOR_BGR2HSV);
          Mat frameBinary;
          inRange(frameHSV, Scalar(floorH, floorS, floorV), Scalar(ceilingH, ceilingS, ceilingV), frameBinary);

          Mat frameRed;
          inRange(frameHSV, Scalar(0,134,125), Scalar(30, ceilingS, ceilingV), frameRed);

          Mat frameYellow;
          inRange(frameHSV, Scalar(20,70,110), Scalar(50, ceilingS, ceilingV), frameYellow);

          Mat frameBlue;
          inRange(frameHSV, Scalar(110, 90, 70), Scalar(140, ceilingS, ceilingV), frameBlue);

          tidy(frameBinary);
          tidy(frameRed);
          tidy(frameBlue);
          tidy(frameYellow);


          redPos = boundBox(frameRed, RED);
          bluePos = boundBox(frameBlue, BLUE);
          yellowPos = boundBox(frameYellow, YELLOW);
          

          imshow("Final", frame);
        


          // imshow("Original", frame);
          // imshow("Binary", frameBinary);
          // imshow("Red", frameRed);
          // imshow("Yellow", frameYellow);
          // imshow("Blue", frameBlue);

          

          color_node->publish_func();

          //rclcpp::spin(std::make_shared<Color_>());
          if (waitKey(30) == 27){
               break;
          }
     }

     rclcpp::shutdown();

     return 0;
}