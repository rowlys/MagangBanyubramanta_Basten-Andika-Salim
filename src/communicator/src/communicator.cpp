#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <iostream>
#include "asio/asio.h"
#include "rclcpp/rclcpp.hpp"

uint8_t kirim[58], terima[13], terimakasih[10];

using namespace std;
using namespace asio;
using asio::serial_port_base;

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