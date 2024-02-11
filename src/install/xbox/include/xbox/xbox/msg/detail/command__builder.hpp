// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xbox:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef XBOX__MSG__DETAIL__COMMAND__BUILDER_HPP_
#define XBOX__MSG__DETAIL__COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xbox/msg/detail/command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xbox
{

namespace msg
{

namespace builder
{

class Init_Command_depth
{
public:
  explicit Init_Command_depth(::xbox::msg::Command & msg)
  : msg_(msg)
  {}
  ::xbox::msg::Command depth(::xbox::msg::Command::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xbox::msg::Command msg_;
};

class Init_Command_yaw
{
public:
  explicit Init_Command_yaw(::xbox::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_depth yaw(::xbox::msg::Command::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Command_depth(msg_);
  }

private:
  ::xbox::msg::Command msg_;
};

class Init_Command_y_cmd
{
public:
  explicit Init_Command_y_cmd(::xbox::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_yaw y_cmd(::xbox::msg::Command::_y_cmd_type arg)
  {
    msg_.y_cmd = std::move(arg);
    return Init_Command_yaw(msg_);
  }

private:
  ::xbox::msg::Command msg_;
};

class Init_Command_x_cmd
{
public:
  Init_Command_x_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Command_y_cmd x_cmd(::xbox::msg::Command::_x_cmd_type arg)
  {
    msg_.x_cmd = std::move(arg);
    return Init_Command_y_cmd(msg_);
  }

private:
  ::xbox::msg::Command msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xbox::msg::Command>()
{
  return xbox::msg::builder::Init_Command_x_cmd();
}

}  // namespace xbox

#endif  // XBOX__MSG__DETAIL__COMMAND__BUILDER_HPP_
