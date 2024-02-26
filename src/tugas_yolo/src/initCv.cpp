#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <vector>

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/image.hpp"
#include "opencv2/opencv.hpp"
#include "cv_bridge/cv_bridge.h"
#include "std_msgs/msg/header.hpp"

using namespace std::chrono_literals;
using std::placeholders::_1;
using namespace std; 
using namespace cv;     

Size size_(640, 480);
VideoCapture camera_(0);

class initCv_ : public rclcpp::Node
{
    
    public: 
    initCv_() : Node("image_")
    {

        // camera_.set(CAP_PROP_FRAME_WIDTH, 640);
        // camera_.set(CAP_PROP_FRAME_HEIGHT, 480);
        publish_ = this->create_publisher<sensor_msgs::msg::Image>("openCamera", 10);
        timer_ = this->create_wall_timer(10ms, std::bind(&initCv_::timer_callback, this));
        
    }

    private:

    void timer_callback(){
        Mat frame, image;
        camera_.read(frame);

        if (!frame.empty())
        {
            resize(frame, image, size_);
            imshow("image", image);
            imshow("frame", frame);

            auto message = cv_bridge::CvImage(std_msgs::msg::Header(), "bgr8", image).toImageMsg();
            publish_->publish(*message);

            RCLCPP_INFO(this->get_logger(), "Publishing successful.");
        }

        waitKey(1);
        
    }

    rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr publish_;
    sensor_msgs::msg::Image::SharedPtr message;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char** argv){
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<initCv_>());
    rclcpp::shutdown();
    return 0;
}