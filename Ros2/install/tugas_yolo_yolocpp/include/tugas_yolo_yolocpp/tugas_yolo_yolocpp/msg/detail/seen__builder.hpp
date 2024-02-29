// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tugas_yolo_yolocpp:msg/Seen.idl
// generated code does not contain a copyright notice

#ifndef TUGAS_YOLO_YOLOCPP__MSG__DETAIL__SEEN__BUILDER_HPP_
#define TUGAS_YOLO_YOLOCPP__MSG__DETAIL__SEEN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tugas_yolo_yolocpp/msg/detail/seen__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tugas_yolo_yolocpp
{

namespace msg
{

namespace builder
{

class Init_Seen_flare
{
public:
  explicit Init_Seen_flare(::tugas_yolo_yolocpp::msg::Seen & msg)
  : msg_(msg)
  {}
  ::tugas_yolo_yolocpp::msg::Seen flare(::tugas_yolo_yolocpp::msg::Seen::_flare_type arg)
  {
    msg_.flare = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tugas_yolo_yolocpp::msg::Seen msg_;
};

class Init_Seen_gate
{
public:
  Init_Seen_gate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Seen_flare gate(::tugas_yolo_yolocpp::msg::Seen::_gate_type arg)
  {
    msg_.gate = std::move(arg);
    return Init_Seen_flare(msg_);
  }

private:
  ::tugas_yolo_yolocpp::msg::Seen msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tugas_yolo_yolocpp::msg::Seen>()
{
  return tugas_yolo_yolocpp::msg::builder::Init_Seen_gate();
}

}  // namespace tugas_yolo_yolocpp

#endif  // TUGAS_YOLO_YOLOCPP__MSG__DETAIL__SEEN__BUILDER_HPP_
