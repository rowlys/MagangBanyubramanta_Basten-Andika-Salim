// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tugas_yolo_yolocpp:msg/Seen.idl
// generated code does not contain a copyright notice

#ifndef TUGAS_YOLO_YOLOCPP__MSG__DETAIL__SEEN__STRUCT_H_
#define TUGAS_YOLO_YOLOCPP__MSG__DETAIL__SEEN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Seen in the package tugas_yolo_yolocpp.
typedef struct tugas_yolo_yolocpp__msg__Seen
{
  int32_t gate;
  int32_t flare;
} tugas_yolo_yolocpp__msg__Seen;

// Struct for a sequence of tugas_yolo_yolocpp__msg__Seen.
typedef struct tugas_yolo_yolocpp__msg__Seen__Sequence
{
  tugas_yolo_yolocpp__msg__Seen * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tugas_yolo_yolocpp__msg__Seen__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUGAS_YOLO_YOLOCPP__MSG__DETAIL__SEEN__STRUCT_H_
