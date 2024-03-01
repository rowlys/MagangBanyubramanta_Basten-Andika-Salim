#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include <rclcpp/rclcpp.hpp>
#include "tugas_joy/msg/command.hpp"
#include "sensor_msgs/msg/joy.hpp"

using namespace std::chrono_literals;
using std::placeholders::_1;

int temp_yaw = 0;
int temp_depth = 0;

class Commands : public rclcpp::Node
{
    public: Commands()
    : Node("command_")
    {
        publish_ = this->create_publisher<tugas_joy::msg::Command>("command", 10);
        subscribe_ = this->create_subscription<sensor_msgs::msg::Joy>("joy", 10, std::bind(&Commands::topic_callback, this, _1));
        //timer_ = this->create_wall_timer(500ms, std::bind(&Commands::timer_callback, this));
    }


    private:
    void topic_callback(const sensor_msgs::msg::Joy & msg) const
    {
        auto input = tugas_joy::msg::Command();
        input.x_cmd = msg.axes[0] * -500;
        input.y_cmd = msg.axes[1] * 500;
        input.x_button = msg.buttons[2];
        input.y_button = msg.buttons[3];
        
        temp_yaw += msg.axes[3]*3;
        

        if(temp_yaw > 180) {
        temp_yaw = -180;
        }

        else if(temp_yaw < -180) {
        temp_yaw = 180;
        
        }
        input.yaw = temp_yaw;

        temp_depth += msg.axes[4] * 2;

        if (temp_depth > 100){
            temp_depth = 100;
        }

        else if (temp_depth < 0){
            temp_depth = 0;
        }
        input.depth = temp_depth;

        publish_->publish(input);
        RCLCPP_INFO(this->get_logger(), "Publishing successful. (%d) (%d) (%d) (%d) (%d)", input.x_cmd, input.y_cmd, input.yaw, input.depth, input.x_button);
    }

    //void timer_callback()
    //{
    //    RCLCPP_INFO(this->get_logger(), "Publishing successful.");
    //}

    //rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<tugas_joy::msg::Command>::SharedPtr publish_;
    rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr subscribe_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc,argv);
    rclcpp::spin(std::make_shared<Commands>());
    rclcpp::shutdown();

    return 0;
}