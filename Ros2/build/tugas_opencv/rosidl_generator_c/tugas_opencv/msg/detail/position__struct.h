// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tugas_opencv:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef TUGAS_OPENCV__MSG__DETAIL__POSITION__STRUCT_H_
#define TUGAS_OPENCV__MSG__DETAIL__POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Position in the package tugas_opencv.
typedef struct tugas_opencv__msg__Position
{
  int32_t x_pos;
  int32_t y_pos;
} tugas_opencv__msg__Position;

// Struct for a sequence of tugas_opencv__msg__Position.
typedef struct tugas_opencv__msg__Position__Sequence
{
  tugas_opencv__msg__Position * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tugas_opencv__msg__Position__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUGAS_OPENCV__MSG__DETAIL__POSITION__STRUCT_H_
