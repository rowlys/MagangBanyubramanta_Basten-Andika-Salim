#include <iostream>
#include <opencv2/opencv.hpp>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

#include <rclcpp/rclcpp.hpp>
#include "tugas_opencv/msg/color.hpp"

using namespace std::chrono_literals;
using std::placeholders::_1;
using namespace cv;
using namespace std;

auto frameDetect = tugas_opencv::msg::Color();

class Color_ : public rclcpp::Node
{
     public: Color_()
     : Node("check")
     {
          publish_ = this->create_publisher<tugas_opencv::msg::Color>("detection", 10);
     }

     void publish_func()
          {
               publish_->publish(frameDetect);
               RCLCPP_INFO(this->get_logger(), "Red: %d\nGreen: %d\n Blue: %d", frameDetect.red,frameDetect.green, frameDetect.blue);
          }
          
     private:
     

     rclcpp::TimerBase::SharedPtr timer_;
     rclcpp::Publisher<tugas_opencv::msg::Color>::SharedPtr publish_;
};

void tidy(Mat chosen_frame){
     erode(chosen_frame, chosen_frame, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );
     dilate(chosen_frame, chosen_frame, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) ); 

     dilate(chosen_frame, chosen_frame, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) ); 
     erode(chosen_frame, chosen_frame, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );
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
          Mat frame;
          
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

          Mat frameGreen;
          inRange(frameHSV, Scalar(40,134,125), Scalar(83, ceilingS, ceilingV), frameGreen);

          Mat frameBlue;
          inRange(frameHSV, Scalar(80,134,125), Scalar(110, ceilingS, ceilingV), frameBlue);

          tidy(frameBinary);
          tidy(frameGreen);

          Moments measureR = moments(frameRed);
          double areaR = measureR.m00;

          Moments measureG = moments(frameGreen);
          double areaG = measureG.m00;

          Moments measureB = moments(frameBlue);
          double areaB = measureB.m00;

          imshow("Original", frame);
          imshow("Binary", frameBinary);
          imshow("Red", frameRed);
          imshow("Green", frameGreen);
          imshow("Blue", frameBlue);

          if (areaR>10000) frameDetect.red = 1;
          if (areaG>10000) frameDetect.green = 1;
          if (areaB>10000) frameDetect.blue = 1;

          color_node->publish_func();

          //rclcpp::spin(std::make_shared<Color_>());
          if (waitKey(30) == 27){
               break;
          }
     }

     rclcpp::shutdown();

     return 0;
}