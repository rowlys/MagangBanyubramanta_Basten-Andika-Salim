// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tugas_yolo_yolocpp:msg/Seen.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tugas_yolo_yolocpp/msg/detail/seen__rosidl_typesupport_introspection_c.h"
#include "tugas_yolo_yolocpp/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tugas_yolo_yolocpp/msg/detail/seen__functions.h"
#include "tugas_yolo_yolocpp/msg/detail/seen__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void tugas_yolo_yolocpp__msg__Seen__rosidl_typesupport_introspection_c__Seen_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tugas_yolo_yolocpp__msg__Seen__init(message_memory);
}

void tugas_yolo_yolocpp__msg__Seen__rosidl_typesupport_introspection_c__Seen_fini_function(void * message_memory)
{
  tugas_yolo_yolocpp__msg__Seen__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tugas_yolo_yolocpp__msg__Seen__rosidl_typesupport_introspection_c__Seen_message_member_array[2] = {
  {
    "gate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tugas_yolo_yolocpp__msg__Seen, gate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "flare",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tugas_yolo_yolocpp__msg__Seen, flare),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tugas_yolo_yolocpp__msg__Seen__rosidl_typesupport_introspection_c__Seen_message_members = {
  "tugas_yolo_yolocpp__msg",  // message namespace
  "Seen",  // message name
  2,  // number of fields
  sizeof(tugas_yolo_yolocpp__msg__Seen),
  tugas_yolo_yolocpp__msg__Seen__rosidl_typesupport_introspection_c__Seen_message_member_array,  // message members
  tugas_yolo_yolocpp__msg__Seen__rosidl_typesupport_introspection_c__Seen_init_function,  // function to initialize message memory (memory has to be allocated)
  tugas_yolo_yolocpp__msg__Seen__rosidl_typesupport_introspection_c__Seen_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tugas_yolo_yolocpp__msg__Seen__rosidl_typesupport_introspection_c__Seen_message_type_support_handle = {
  0,
  &tugas_yolo_yolocpp__msg__Seen__rosidl_typesupport_introspection_c__Seen_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tugas_yolo_yolocpp
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tugas_yolo_yolocpp, msg, Seen)() {
  if (!tugas_yolo_yolocpp__msg__Seen__rosidl_typesupport_introspection_c__Seen_message_type_support_handle.typesupport_identifier) {
    tugas_yolo_yolocpp__msg__Seen__rosidl_typesupport_introspection_c__Seen_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tugas_yolo_yolocpp__msg__Seen__rosidl_typesupport_introspection_c__Seen_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
