// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tugas_yolo_yolocpp:msg/Seen.idl
// generated code does not contain a copyright notice
#include "tugas_yolo_yolocpp/msg/detail/seen__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tugas_yolo_yolocpp/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tugas_yolo_yolocpp/msg/detail/seen__struct.h"
#include "tugas_yolo_yolocpp/msg/detail/seen__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Seen__ros_msg_type = tugas_yolo_yolocpp__msg__Seen;

static bool _Seen__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Seen__ros_msg_type * ros_message = static_cast<const _Seen__ros_msg_type *>(untyped_ros_message);
  // Field name: gate
  {
    cdr << ros_message->gate;
  }

  // Field name: flare
  {
    cdr << ros_message->flare;
  }

  return true;
}

static bool _Seen__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Seen__ros_msg_type * ros_message = static_cast<_Seen__ros_msg_type *>(untyped_ros_message);
  // Field name: gate
  {
    cdr >> ros_message->gate;
  }

  // Field name: flare
  {
    cdr >> ros_message->flare;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tugas_yolo_yolocpp
size_t get_serialized_size_tugas_yolo_yolocpp__msg__Seen(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Seen__ros_msg_type * ros_message = static_cast<const _Seen__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name gate
  {
    size_t item_size = sizeof(ros_message->gate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flare
  {
    size_t item_size = sizeof(ros_message->flare);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Seen__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tugas_yolo_yolocpp__msg__Seen(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tugas_yolo_yolocpp
size_t max_serialized_size_tugas_yolo_yolocpp__msg__Seen(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: gate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: flare
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Seen__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tugas_yolo_yolocpp__msg__Seen(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Seen = {
  "tugas_yolo_yolocpp::msg",
  "Seen",
  _Seen__cdr_serialize,
  _Seen__cdr_deserialize,
  _Seen__get_serialized_size,
  _Seen__max_serialized_size
};

static rosidl_message_type_support_t _Seen__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Seen,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tugas_yolo_yolocpp, msg, Seen)() {
  return &_Seen__type_support;
}

#if defined(__cplusplus)
}
#endif
