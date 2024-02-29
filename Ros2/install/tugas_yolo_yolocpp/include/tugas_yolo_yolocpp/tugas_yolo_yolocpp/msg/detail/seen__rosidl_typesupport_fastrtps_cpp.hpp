// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from tugas_yolo_yolocpp:msg/Seen.idl
// generated code does not contain a copyright notice

#ifndef TUGAS_YOLO_YOLOCPP__MSG__DETAIL__SEEN__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define TUGAS_YOLO_YOLOCPP__MSG__DETAIL__SEEN__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "tugas_yolo_yolocpp/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "tugas_yolo_yolocpp/msg/detail/seen__struct.hpp"

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

namespace tugas_yolo_yolocpp
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tugas_yolo_yolocpp
cdr_serialize(
  const tugas_yolo_yolocpp::msg::Seen & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tugas_yolo_yolocpp
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tugas_yolo_yolocpp::msg::Seen & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tugas_yolo_yolocpp
get_serialized_size(
  const tugas_yolo_yolocpp::msg::Seen & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tugas_yolo_yolocpp
max_serialized_size_Seen(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tugas_yolo_yolocpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tugas_yolo_yolocpp
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tugas_yolo_yolocpp, msg, Seen)();

#ifdef __cplusplus
}
#endif

#endif  // TUGAS_YOLO_YOLOCPP__MSG__DETAIL__SEEN__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
