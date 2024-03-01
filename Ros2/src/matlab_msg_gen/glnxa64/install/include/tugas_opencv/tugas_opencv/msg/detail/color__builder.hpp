// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tugas_opencv:msg/Color.idl
// generated code does not contain a copyright notice

#ifndef TUGAS_OPENCV__MSG__DETAIL__COLOR__BUILDER_HPP_
#define TUGAS_OPENCV__MSG__DETAIL__COLOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tugas_opencv/msg/detail/color__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tugas_opencv
{

namespace msg
{

namespace builder
{

class Init_Color_yellow
{
public:
  explicit Init_Color_yellow(::tugas_opencv::msg::Color & msg)
  : msg_(msg)
  {}
  ::tugas_opencv::msg::Color yellow(::tugas_opencv::msg::Color::_yellow_type arg)
  {
    msg_.yellow = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tugas_opencv::msg::Color msg_;
};

class Init_Color_blue
{
public:
  explicit Init_Color_blue(::tugas_opencv::msg::Color & msg)
  : msg_(msg)
  {}
  Init_Color_yellow blue(::tugas_opencv::msg::Color::_blue_type arg)
  {
    msg_.blue = std::move(arg);
    return Init_Color_yellow(msg_);
  }

private:
  ::tugas_opencv::msg::Color msg_;
};

class Init_Color_red
{
public:
  Init_Color_red()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Color_blue red(::tugas_opencv::msg::Color::_red_type arg)
  {
    msg_.red = std::move(arg);
    return Init_Color_blue(msg_);
  }

private:
  ::tugas_opencv::msg::Color msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tugas_opencv::msg::Color>()
{
  return tugas_opencv::msg::builder::Init_Color_red();
}

}  // namespace tugas_opencv

#endif  // TUGAS_OPENCV__MSG__DETAIL__COLOR__BUILDER_HPP_
