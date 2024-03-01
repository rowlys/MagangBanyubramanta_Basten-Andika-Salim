// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xbox:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef XBOX__MSG__DETAIL__COMMAND__STRUCT_H_
#define XBOX__MSG__DETAIL__COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Command in the package xbox.
typedef struct xbox__msg__Command
{
  int32_t x_cmd;
  int32_t y_cmd;
  int32_t yaw;
  int32_t depth;
} xbox__msg__Command;

// Struct for a sequence of xbox__msg__Command.
typedef struct xbox__msg__Command__Sequence
{
  xbox__msg__Command * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xbox__msg__Command__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XBOX__MSG__DETAIL__COMMAND__STRUCT_H_
