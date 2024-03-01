// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tugas_opencv:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef TUGAS_OPENCV__MSG__DETAIL__POSITION__BUILDER_HPP_
#define TUGAS_OPENCV__MSG__DETAIL__POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tugas_opencv/msg/detail/position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tugas_opencv
{

namespace msg
{

namespace builder
{

class Init_Position_yellow_y_pos
{
public:
  explicit Init_Position_yellow_y_pos(::tugas_opencv::msg::Position & msg)
  : msg_(msg)
  {}
  ::tugas_opencv::msg::Position yellow_y_pos(::tugas_opencv::msg::Position::_yellow_y_pos_type arg)
  {
    msg_.yellow_y_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tugas_opencv::msg::Position msg_;
};

class Init_Position_yellow_x_pos
{
public:
  explicit Init_Position_yellow_x_pos(::tugas_opencv::msg::Position & msg)
  : msg_(msg)
  {}
  Init_Position_yellow_y_pos yellow_x_pos(::tugas_opencv::msg::Position::_yellow_x_pos_type arg)
  {
    msg_.yellow_x_pos = std::move(arg);
    return Init_Position_yellow_y_pos(msg_);
  }

private:
  ::tugas_opencv::msg::Position msg_;
};

class Init_Position_blue_y_pos
{
public:
  explicit Init_Position_blue_y_pos(::tugas_opencv::msg::Position & msg)
  : msg_(msg)
  {}
  Init_Position_yellow_x_pos blue_y_pos(::tugas_opencv::msg::Position::_blue_y_pos_type arg)
  {
    msg_.blue_y_pos = std::move(arg);
    return Init_Position_yellow_x_pos(msg_);
  }

private:
  ::tugas_opencv::msg::Position msg_;
};

class Init_Position_blue_x_pos
{
public:
  explicit Init_Position_blue_x_pos(::tugas_opencv::msg::Position & msg)
  : msg_(msg)
  {}
  Init_Position_blue_y_pos blue_x_pos(::tugas_opencv::msg::Position::_blue_x_pos_type arg)
  {
    msg_.blue_x_pos = std::move(arg);
    return Init_Position_blue_y_pos(msg_);
  }

private:
  ::tugas_opencv::msg::Position msg_;
};

class Init_Position_red_y_pos
{
public:
  explicit Init_Position_red_y_pos(::tugas_opencv::msg::Position & msg)
  : msg_(msg)
  {}
  Init_Position_blue_x_pos red_y_pos(::tugas_opencv::msg::Position::_red_y_pos_type arg)
  {
    msg_.red_y_pos = std::move(arg);
    return Init_Position_blue_x_pos(msg_);
  }

private:
  ::tugas_opencv::msg::Position msg_;
};

class Init_Position_red_x_pos
{
public:
  Init_Position_red_x_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Position_red_y_pos red_x_pos(::tugas_opencv::msg::Position::_red_x_pos_type arg)
  {
    msg_.red_x_pos = std::move(arg);
    return Init_Position_red_y_pos(msg_);
  }

private:
  ::tugas_opencv::msg::Position msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tugas_opencv::msg::Position>()
{
  return tugas_opencv::msg::builder::Init_Position_red_x_pos();
}

}  // namespace tugas_opencv

#endif  // TUGAS_OPENCV__MSG__DETAIL__POSITION__BUILDER_HPP_
