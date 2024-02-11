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


class Color_ : public rclcpp::Node
{
     public: Color_()
     : Node("check")
     {
          publish_ = this->create_publisher<tugas_opencv::msg::Color>("detection", 10);
     }

     void publish_func()
          {
        
               RCLCPP_INFO(this->get_logger(), "A color is detected.");
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
          Mat frame;
          
          if (!camera.read(frame)){
               cout<<"Frame cannot be read."<< endl;
               break;
          }

          Mat frameHSV;
          cvtColor(frame, frameHSV, COLOR_BGR2HSV);
          Mat frameBinary;
          inRange(frameHSV, Scalar(floorH, floorS, floorV), Scalar(ceilingH, ceilingS, ceilingV), frameBinary);

          Mat frameGreen;
          inRange(frameHSV, Scalar(40,134,125), Scalar(83, ceilingS, ceilingV), frameGreen);

          tidy(frameBinary);
          tidy(frameGreen);

          Moments measureG = moments(frameGreen);
          double areaG = measureG.m00;
          double lengthGX = measureG.m01;
          double lengthGY = measureG.m10;

          imshow("Original", frame);
          imshow("Binary", frameBinary);
          imshow("Green", frameGreen);

          if (areaG>10000){
               color_node->publish_func();
          }


          //rclcpp::spin(std::make_shared<Color_>());
          if (waitKey(30) == 27){
               break;
          }
     }

     rclcpp::shutdown();

     return 0;
}