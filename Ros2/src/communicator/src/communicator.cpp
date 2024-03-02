#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <iostream>
#include "asio.hpp"
#include "rclcpp/rclcpp.hpp"
#include "tugas_joy/msg/command.hpp"
#include "tugas_opencv/msg/color.hpp"
#include "tugas_opencv/msg/position.hpp"
#include "tugas_yolo_yolocpp/msg/seen.hpp"
#include <cstdint>

uint8_t kirim[58], terima[13], terimakasih[10];

using namespace std;
using namespace asio;
using std::placeholders::_1;
using asio::serial_port_base;

uint16_t input[6];

class Communicator : public rclcpp::Node
{
    public: Communicator()
    : Node("communicator_")
    {
        subscribe_ = this->create_subscription<tugas_joy::msg::Command>("command", 10, std::bind(&Communicator::topic_callback, this, _1));
        subscribecolor_ = this->create_subscription<tugas_opencv::msg::Color>("colordetect", 10, std::bind(&Communicator::color_callback, this, _1));
        subscribeposition_ = this->create_subscription<tugas_opencv::msg::Position>("positiondetect", 10, std::bind(&Communicator::colorpos_callback, this, _1));
        subscribeobject_ = this->create_subscription<tugas_yolo_yolocpp::msg::Seen>("yoloOutput", 10, std::bind(&Communicator::object_callback, this, _1));
        // timer_ = this->create_wall_timer(500ms, std::bind(&Commands::timer_callback, this));
    }


    private:
    void topic_callback(const tugas_joy::msg::Command & msg) const
    {
        
        input[0] = msg.x_cmd;
        input[1] = msg.y_cmd;
        input[2] = msg.yaw;
        input[3] = msg.depth;
        input[4] = msg.x_button;
        input[5] = msg.y_button;

        
    }

    void object_callback(const tugas_yolo_yolocpp::msg::Seen & msg) const
    {
      uint16_t value = -500;
        int16_t signedvalue = value - 65536;

        cout<<value<<endl;
        cout<<signedvalue<<endl; 

        
    }

    void color_callback(const tugas_opencv::msg::Color & msg) const
    {

        
    }

    void colorpos_callback(const tugas_opencv::msg::Position & msg) const
    {

        
    }

    //void timer_callback()
    //{
    //    RCLCPP_INFO(this->get_logger(), "Publishing successful.");
    //}

    //rclcpp::TimerBase::SharedPtr timer_;
    // rclcpp::Publisher<tugas_joy::msg::Command>::SharedPtr publish_;
    rclcpp::Subscription<tugas_joy::msg::Command>::SharedPtr subscribe_;
    rclcpp::Subscription<tugas_opencv::msg::Color>::SharedPtr subscribecolor_;
    rclcpp::Subscription<tugas_opencv::msg::Position>::SharedPtr subscribeposition_;
    rclcpp::Subscription<tugas_yolo_yolocpp::msg::Seen>::SharedPtr subscribeobject_;
};

int main(int argc, char *argv[])
{
  // try
  // {
  //   io_service io;
  //   serial_port port(io, "/dev/ttyACM0");

  //   port.set_option(serial_port_base::baud_rate(115200));
  //   port.set_option(serial_port_base::flow_control(serial_port_base::flow_control::software));
  //   port.set_option(serial_port_base::parity(serial_port_base::parity::none));
  //   port.set_option(serial_port_base::stop_bits(serial_port_base::stop_bits::one));
  //   port.set_option(serial_port_base::character_size(8));

  //   // Your code for serial communication goes here
  //   std::string message = "Hello, STM32!";

  //   // Sending the string over the serial port
  //   asio::write(port, asio::buffer(message));
  //   asio::read(port, asio::buffer(terima, 13));
  //   cout << "Received: " << terima << endl;
  // }
  // catch (const std::exception &e)
  // {
  //   cerr << "Error: " << e.what() << endl;
  // }

  uint16_t value = -500;
        int16_t signedvalue = value - 65536;

        cout<<value<<endl;
        cout<<signedvalue<<endl; 

  rclcpp::init(argc,argv);
    rclcpp::spin(std::make_shared<Communicator>());
    rclcpp::shutdown();

  // int16_t value = 500;
  // uint16_t value1 = 500;
  
  // int16_t signedvalue1 = value1-65536;

  // cout<<~value<<endl;
  // cout<<value1<<endl;
  // cout<<signedvalue1<<endl;
  
  return 0;
}

