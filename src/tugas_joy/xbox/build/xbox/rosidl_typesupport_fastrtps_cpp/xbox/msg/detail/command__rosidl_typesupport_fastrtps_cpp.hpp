// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from xbox:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef XBOX__MSG__DETAIL__COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define XBOX__MSG__DETAIL__COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "xbox/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "xbox/msg/detail/command__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace xbox
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xbox
cdr_serialize(
  const xbox::msg::Command & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xbox
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  xbox::msg::Command & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xbox
get_serialized_size(
  const xbox::msg::Command & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xbox
max_serialized_size_Command(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace xbox

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xbox
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, xbox, msg, Command)();

#ifdef __cplusplus
}
#endif

#endif  // XBOX__MSG__DETAIL__COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
