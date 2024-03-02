// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tugas_joy:msg/Command.idl
// generated code does not contain a copyright notice
#include "tugas_joy/msg/detail/command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tugas_joy/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tugas_joy/msg/detail/command__struct.h"
#include "tugas_joy/msg/detail/command__functions.h"
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


using _Command__ros_msg_type = tugas_joy__msg__Command;

static bool _Command__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Command__ros_msg_type * ros_message = static_cast<const _Command__ros_msg_type *>(untyped_ros_message);
  // Field name: x_cmd
  {
    cdr << ros_message->x_cmd;
  }

  // Field name: y_cmd
  {
    cdr << ros_message->y_cmd;
  }

  // Field name: yaw
  {
    cdr << ros_message->yaw;
  }

  // Field name: depth
  {
    cdr << ros_message->depth;
  }

  // Field name: x_button
  {
    cdr << ros_message->x_button;
  }

  // Field name: y_button
  {
    cdr << ros_message->y_button;
  }

  return true;
}

static bool _Command__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Command__ros_msg_type * ros_message = static_cast<_Command__ros_msg_type *>(untyped_ros_message);
  // Field name: x_cmd
  {
    cdr >> ros_message->x_cmd;
  }

  // Field name: y_cmd
  {
    cdr >> ros_message->y_cmd;
  }

  // Field name: yaw
  {
    cdr >> ros_message->yaw;
  }

  // Field name: depth
  {
    cdr >> ros_message->depth;
  }

  // Field name: x_button
  {
    cdr >> ros_message->x_button;
  }

  // Field name: y_button
  {
    cdr >> ros_message->y_button;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tugas_joy
size_t get_serialized_size_tugas_joy__msg__Command(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Command__ros_msg_type * ros_message = static_cast<const _Command__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x_cmd
  {
    size_t item_size = sizeof(ros_message->x_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_cmd
  {
    size_t item_size = sizeof(ros_message->y_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw
  {
    size_t item_size = sizeof(ros_message->yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name depth
  {
    size_t item_size = sizeof(ros_message->depth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_button
  {
    size_t item_size = sizeof(ros_message->x_button);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_button
  {
    size_t item_size = sizeof(ros_message->y_button);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Command__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tugas_joy__msg__Command(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tugas_joy
size_t max_serialized_size_tugas_joy__msg__Command(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: x_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: depth
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: x_button
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y_button
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = tugas_joy__msg__Command;
    is_plain =
      (
      offsetof(DataType, y_button) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Command__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tugas_joy__msg__Command(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Command = {
  "tugas_joy::msg",
  "Command",
  _Command__cdr_serialize,
  _Command__cdr_deserialize,
  _Command__get_serialized_size,
  _Command__max_serialized_size
};

static rosidl_message_type_support_t _Command__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Command,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tugas_joy, msg, Command)() {
  return &_Command__type_support;
}

#if defined(__cplusplus)
}
#endif
