#include <iostream>
#include <opencv2/opencv.hpp>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

#include <rclcpp/rclcpp.hpp>
#include "tugas_opencv/msg/color.hpp"
#include "tugas_opencv/msg/position.hpp"
#include "cv_bridge/cv_bridge.h"
#include "sensor_msgs/msg/image.hpp"

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

     int floorH = 0;
     int ceilingH = 179;

     int floorS = 0;
     int ceilingS = 255;

     int floorV = 0;
     int ceilingV = 255;

Mat frame;

int half_width;
int half_height;

     


class Color_ : public rclcpp::Node
{
     public: Color_()
     : Node("check")
     {
          publish_ = this->create_publisher<tugas_opencv::msg::Color>("colordetect", 10);
          publishColor_ = this->create_publisher<tugas_opencv::msg::Position>("positiondetect", 10);
          subscriber_ = this->create_subscription<sensor_msgs::msg::Image>("openCamera", 10, std::bind(&Color_::topic_callback, this, _1));
     }

     void publish_func()
          {
               publish_->publish(frameDetect);
               publishColor_->publish(colorPosition);
               RCLCPP_INFO(this->get_logger(), "Red: %d\nYellow: %d\nBlue: %d", frameDetect.red,frameDetect.yellow, frameDetect.blue);
               RCLCPP_INFO(this->get_logger(), "Red, x: %d y: %d", colorPosition.red_x_pos, colorPosition.red_y_pos);
               RCLCPP_INFO(this->get_logger(), "Yellow, x: %d y: %d", colorPosition.yellow_x_pos, colorPosition.yellow_y_pos);
               RCLCPP_INFO(this->get_logger(), "Blue, x: %d y: %d", colorPosition.blue_x_pos, colorPosition.blue_y_pos);
          }
          
     private:

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

     void topic_callback(const sensor_msgs::msg::Image &img_msg){
          cv_bridge::CvImagePtr temp_img = cv_bridge::toCvCopy(img_msg);
          frame = temp_img->image;

          half_width = frame.cols/2;
          half_height = frame.rows/2;

          frameDetect.red = 0;
          frameDetect.blue = 0;
          frameDetect.yellow = 0;

          Mat frameHSV;
          cvtColor(frame, frameHSV, COLOR_BGR2HSV);
          Mat frameBinary;
          inRange(frameHSV, Scalar(floorH, floorS, floorV), Scalar(ceilingH, ceilingS, ceilingV), frameBinary);

          Mat frameRed;
          inRange(frameHSV, Scalar(150,134,125), Scalar(179, ceilingS, ceilingV), frameRed);

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

          if (redPos.x != 0 && redPos.y != 0) {
               frameDetect.red = 1;
               colorPosition.red_x_pos = redPos.x - half_width;
               colorPosition.red_y_pos = redPos.y - half_height;
          }

          if (bluePos.x != 0 && bluePos.y != 0) {
               frameDetect.blue = 1;
               colorPosition.blue_x_pos = bluePos.x - half_width;
               colorPosition.blue_y_pos = bluePos.y - half_height;
          }
          
          if (yellowPos.x != 0 && yellowPos.y != 0) {
               frameDetect.yellow = 1;
               colorPosition.yellow_x_pos = yellowPos.x - half_width;
               colorPosition.yellow_y_pos = yellowPos.y - half_height;
          }

          imshow("Final", frame);

          waitKey(1);
          cout<<"HAHAHAH2"<<endl;

          publish_func();
     }


     rclcpp::TimerBase::SharedPtr timer_;
     rclcpp::Publisher<tugas_opencv::msg::Color>::SharedPtr publish_;
     rclcpp::Publisher<tugas_opencv::msg::Position>::SharedPtr publishColor_;
     rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr subscriber_;
     
};







int main(int argc, char** argv){
     namedWindow("HSV Control", WINDOW_NORMAL);

     createTrackbar("H Floor", "HSV Control", &floorH, 179);
     createTrackbar("H Ceiling", "HSV Control", &ceilingH, 179);

     createTrackbar("S Floor", "HSV Control", &floorS, 255);
     createTrackbar("S Ceiling", "HSV Control", &ceilingS, 255);

     createTrackbar("V Floor", "HSV Control", &floorV, 255);
     createTrackbar("V Ceiling", "HSV Control", &ceilingV, 255);

     rclcpp::init(argc,argv);
     auto color_node = std::make_shared<Color_>();
     rclcpp::spin(std::make_shared<Color_>());
     rclcpp::shutdown();

     return 0;
}