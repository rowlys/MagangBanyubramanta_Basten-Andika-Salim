// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from tugas_opencv:msg/Color.idl
// generated code does not contain a copyright notice

#ifndef TUGAS_OPENCV__MSG__DETAIL__COLOR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define TUGAS_OPENCV__MSG__DETAIL__COLOR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "tugas_opencv/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "tugas_opencv/msg/detail/color__struct.hpp"

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

namespace tugas_opencv
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tugas_opencv
cdr_serialize(
  const tugas_opencv::msg::Color & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tugas_opencv
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tugas_opencv::msg::Color & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tugas_opencv
get_serialized_size(
  const tugas_opencv::msg::Color & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tugas_opencv
max_serialized_size_Color(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tugas_opencv

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tugas_opencv
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tugas_opencv, msg, Color)();

#ifdef __cplusplus
}
#endif

#endif  // TUGAS_OPENCV__MSG__DETAIL__COLOR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
