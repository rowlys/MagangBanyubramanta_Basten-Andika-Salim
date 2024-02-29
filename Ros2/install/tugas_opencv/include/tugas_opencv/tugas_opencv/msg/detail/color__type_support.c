// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tugas_opencv:msg/Color.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tugas_opencv/msg/detail/color__rosidl_typesupport_introspection_c.h"
#include "tugas_opencv/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tugas_opencv/msg/detail/color__functions.h"
#include "tugas_opencv/msg/detail/color__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void tugas_opencv__msg__Color__rosidl_typesupport_introspection_c__Color_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tugas_opencv__msg__Color__init(message_memory);
}

void tugas_opencv__msg__Color__rosidl_typesupport_introspection_c__Color_fini_function(void * message_memory)
{
  tugas_opencv__msg__Color__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tugas_opencv__msg__Color__rosidl_typesupport_introspection_c__Color_message_member_array[3] = {
  {
    "red",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tugas_opencv__msg__Color, red),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "blue",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tugas_opencv__msg__Color, blue),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yellow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tugas_opencv__msg__Color, yellow),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tugas_opencv__msg__Color__rosidl_typesupport_introspection_c__Color_message_members = {
  "tugas_opencv__msg",  // message namespace
  "Color",  // message name
  3,  // number of fields
  sizeof(tugas_opencv__msg__Color),
  tugas_opencv__msg__Color__rosidl_typesupport_introspection_c__Color_message_member_array,  // message members
  tugas_opencv__msg__Color__rosidl_typesupport_introspection_c__Color_init_function,  // function to initialize message memory (memory has to be allocated)
  tugas_opencv__msg__Color__rosidl_typesupport_introspection_c__Color_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tugas_opencv__msg__Color__rosidl_typesupport_introspection_c__Color_message_type_support_handle = {
  0,
  &tugas_opencv__msg__Color__rosidl_typesupport_introspection_c__Color_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tugas_opencv
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tugas_opencv, msg, Color)() {
  if (!tugas_opencv__msg__Color__rosidl_typesupport_introspection_c__Color_message_type_support_handle.typesupport_identifier) {
    tugas_opencv__msg__Color__rosidl_typesupport_introspection_c__Color_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tugas_opencv__msg__Color__rosidl_typesupport_introspection_c__Color_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
