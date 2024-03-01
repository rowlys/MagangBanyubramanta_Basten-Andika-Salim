#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <iostream>
#include "asio.hpp"
#include "rclcpp/rclcpp.hpp"
#include "tugas_joy/msg/command.hpp"

uint8_t kirim[58], terima[13], terimakasih[10];

using namespace std;
using namespace asio;
using std::placeholders::_1;
using asio::serial_port_base;

auto input = tugas_joy::msg::Command();

class Communicator : public rclcpp::Node
{
    public: Communicator()
    : Node("communicator_")
    {
        subscribe_ = this->create_subscription<tugas_joy::msg::Command>("command", 10, std::bind(&Communicator::topic_callback, this, _1));
        //timer_ = this->create_wall_timer(500ms, std::bind(&Commands::timer_callback, this));
    }


    private:
    void topic_callback(const tugas_joy::msg::Command & msg) const
    {
        
        input.x_cmd = msg.x_cmd;
        input.y_cmd = msg.y_cmd;
        input.yaw = msg.yaw;
        input.depth = msg.depth;
        input.x_button = msg.x_button;
        input.y_button = msg.y_button;
    }

    //void timer_callback()
    //{
    //    RCLCPP_INFO(this->get_logger(), "Publishing successful.");
    //}

    //rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<xbox::msg::Command>::SharedPtr publish_;
    rclcpp::Subscription<tugas_joy::msg::>::SharedPtr subscribe_;
};

int main(int argc, char *argv[])
{
  try
  {
    io_service io;
    serial_port port(io, "/dev/ttyACM0");

    port.set_option(serial_port_base::baud_rate(115200));
    port.set_option(serial_port_base::flow_control(serial_port_base::flow_control::software));
    port.set_option(serial_port_base::parity(serial_port_base::parity::none));
    port.set_option(serial_port_base::stop_bits(serial_port_base::stop_bits::one));
    port.set_option(serial_port_base::character_size(8));

    // Your code for serial communication goes here
    std::string message = "Hello, STM32!";

    // Sending the string over the serial port
    asio::write(port, asio::buffer(message));
    asio::read(port, asio::buffer(terima, 13));
    cout << "Received: " << terima << endl;
  }
  catch (const std::exception &e)
  {
    cerr << "Error: " << e.what() << endl;
  }

  return 0;
}

