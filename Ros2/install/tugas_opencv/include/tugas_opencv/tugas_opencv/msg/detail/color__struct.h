// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tugas_opencv:msg/Color.idl
// generated code does not contain a copyright notice

#ifndef TUGAS_OPENCV__MSG__DETAIL__COLOR__STRUCT_H_
#define TUGAS_OPENCV__MSG__DETAIL__COLOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Color in the package tugas_opencv.
typedef struct tugas_opencv__msg__Color
{
  int32_t red;
  int32_t blue;
  int32_t green;
} tugas_opencv__msg__Color;

// Struct for a sequence of tugas_opencv__msg__Color.
typedef struct tugas_opencv__msg__Color__Sequence
{
  tugas_opencv__msg__Color * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tugas_opencv__msg__Color__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUGAS_OPENCV__MSG__DETAIL__COLOR__STRUCT_H_
