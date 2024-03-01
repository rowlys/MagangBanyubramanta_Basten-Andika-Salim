// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tugas_joy:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef TUGAS_JOY__MSG__DETAIL__COMMAND__BUILDER_HPP_
#define TUGAS_JOY__MSG__DETAIL__COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tugas_joy/msg/detail/command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tugas_joy
{

namespace msg
{

namespace builder
{

class Init_Command_x_button
{
public:
  explicit Init_Command_x_button(::tugas_joy::msg::Command & msg)
  : msg_(msg)
  {}
  ::tugas_joy::msg::Command x_button(::tugas_joy::msg::Command::_x_button_type arg)
  {
    msg_.x_button = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tugas_joy::msg::Command msg_;
};

class Init_Command_depth
{
public:
  explicit Init_Command_depth(::tugas_joy::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_x_button depth(::tugas_joy::msg::Command::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return Init_Command_x_button(msg_);
  }

private:
  ::tugas_joy::msg::Command msg_;
};

class Init_Command_yaw
{
public:
  explicit Init_Command_yaw(::tugas_joy::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_depth yaw(::tugas_joy::msg::Command::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Command_depth(msg_);
  }

private:
  ::tugas_joy::msg::Command msg_;
};

class Init_Command_y_cmd
{
public:
  explicit Init_Command_y_cmd(::tugas_joy::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_yaw y_cmd(::tugas_joy::msg::Command::_y_cmd_type arg)
  {
    msg_.y_cmd = std::move(arg);
    return Init_Command_yaw(msg_);
  }

private:
  ::tugas_joy::msg::Command msg_;
};

class Init_Command_x_cmd
{
public:
  Init_Command_x_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Command_y_cmd x_cmd(::tugas_joy::msg::Command::_x_cmd_type arg)
  {
    msg_.x_cmd = std::move(arg);
    return Init_Command_y_cmd(msg_);
  }

private:
  ::tugas_joy::msg::Command msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tugas_joy::msg::Command>()
{
  return tugas_joy::msg::builder::Init_Command_x_cmd();
}

}  // namespace tugas_joy

#endif  // TUGAS_JOY__MSG__DETAIL__COMMAND__BUILDER_HPP_
