// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tugas_yolo_yolocpp:msg/Seen.idl
// generated code does not contain a copyright notice
#include "tugas_yolo_yolocpp/msg/detail/seen__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tugas_yolo_yolocpp__msg__Seen__init(tugas_yolo_yolocpp__msg__Seen * msg)
{
  if (!msg) {
    return false;
  }
  // gate
  // flare
  return true;
}

void
tugas_yolo_yolocpp__msg__Seen__fini(tugas_yolo_yolocpp__msg__Seen * msg)
{
  if (!msg) {
    return;
  }
  // gate
  // flare
}

bool
tugas_yolo_yolocpp__msg__Seen__are_equal(const tugas_yolo_yolocpp__msg__Seen * lhs, const tugas_yolo_yolocpp__msg__Seen * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // gate
  if (lhs->gate != rhs->gate) {
    return false;
  }
  // flare
  if (lhs->flare != rhs->flare) {
    return false;
  }
  return true;
}

bool
tugas_yolo_yolocpp__msg__Seen__copy(
  const tugas_yolo_yolocpp__msg__Seen * input,
  tugas_yolo_yolocpp__msg__Seen * output)
{
  if (!input || !output) {
    return false;
  }
  // gate
  output->gate = input->gate;
  // flare
  output->flare = input->flare;
  return true;
}

tugas_yolo_yolocpp__msg__Seen *
tugas_yolo_yolocpp__msg__Seen__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tugas_yolo_yolocpp__msg__Seen * msg = (tugas_yolo_yolocpp__msg__Seen *)allocator.allocate(sizeof(tugas_yolo_yolocpp__msg__Seen), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tugas_yolo_yolocpp__msg__Seen));
  bool success = tugas_yolo_yolocpp__msg__Seen__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tugas_yolo_yolocpp__msg__Seen__destroy(tugas_yolo_yolocpp__msg__Seen * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tugas_yolo_yolocpp__msg__Seen__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tugas_yolo_yolocpp__msg__Seen__Sequence__init(tugas_yolo_yolocpp__msg__Seen__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tugas_yolo_yolocpp__msg__Seen * data = NULL;

  if (size) {
    data = (tugas_yolo_yolocpp__msg__Seen *)allocator.zero_allocate(size, sizeof(tugas_yolo_yolocpp__msg__Seen), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tugas_yolo_yolocpp__msg__Seen__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tugas_yolo_yolocpp__msg__Seen__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tugas_yolo_yolocpp__msg__Seen__Sequence__fini(tugas_yolo_yolocpp__msg__Seen__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tugas_yolo_yolocpp__msg__Seen__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tugas_yolo_yolocpp__msg__Seen__Sequence *
tugas_yolo_yolocpp__msg__Seen__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tugas_yolo_yolocpp__msg__Seen__Sequence * array = (tugas_yolo_yolocpp__msg__Seen__Sequence *)allocator.allocate(sizeof(tugas_yolo_yolocpp__msg__Seen__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tugas_yolo_yolocpp__msg__Seen__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tugas_yolo_yolocpp__msg__Seen__Sequence__destroy(tugas_yolo_yolocpp__msg__Seen__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tugas_yolo_yolocpp__msg__Seen__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tugas_yolo_yolocpp__msg__Seen__Sequence__are_equal(const tugas_yolo_yolocpp__msg__Seen__Sequence * lhs, const tugas_yolo_yolocpp__msg__Seen__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tugas_yolo_yolocpp__msg__Seen__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tugas_yolo_yolocpp__msg__Seen__Sequence__copy(
  const tugas_yolo_yolocpp__msg__Seen__Sequence * input,
  tugas_yolo_yolocpp__msg__Seen__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tugas_yolo_yolocpp__msg__Seen);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tugas_yolo_yolocpp__msg__Seen * data =
      (tugas_yolo_yolocpp__msg__Seen *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tugas_yolo_yolocpp__msg__Seen__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tugas_yolo_yolocpp__msg__Seen__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tugas_yolo_yolocpp__msg__Seen__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
