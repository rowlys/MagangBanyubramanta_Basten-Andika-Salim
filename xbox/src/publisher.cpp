#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include <rclcpp/rclcpp.hpp>
#include "xbox/msg/command.hpp"
#include "sensor_msgs/msg/joy.hpp"

using namespace std::chrono_literals;
using std::placeholders::_1;

class Commands : public rclcpp::Node
{
    public: Commands()
    : Node("command_")
    {
        publish_ = this->create_publisher<xbox::msg::Command>("command", 10);
        subscribe_ = this->create_subscription<sensor_msgs::msg::Joy>("joy", 10, std::bind(&Commands::topic_callback, this, _1));
        //timer_ = this->create_wall_timer(500ms, std::bind(&Commands::timer_callback, this));
    }


    private:
    void topic_callback(const sensor_msgs::msg::Joy & msg) const
    {
        auto input = xbox::msg::Command();
        input.x_cmd = msg.axes[0] * 500;
        input.y_cmd = msg.axes[1] * 500;
        input.yaw = msg.axes[3] * 500;
        input.depth = msg.axes[4] * 500;

        publish_->publish(input);
        RCLCPP_INFO(this->get_logger(), "Publishing successful.");
    }

    //void timer_callback()
    //{
    //    RCLCPP_INFO(this->get_logger(), "Publishing successful.");
    //}

    //rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<xbox::msg::Command>::SharedPtr publish_;
    rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr subscribe_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc,argv);
    rclcpp::spin(std::make_shared<Commands>());
    rclcpp::shutdown();

    return 0;
}