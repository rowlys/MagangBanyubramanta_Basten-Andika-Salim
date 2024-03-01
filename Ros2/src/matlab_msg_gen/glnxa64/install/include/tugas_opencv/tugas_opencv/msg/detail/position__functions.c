// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tugas_opencv:msg/Position.idl
// generated code does not contain a copyright notice
#include "tugas_opencv/msg/detail/position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tugas_opencv__msg__Position__init(tugas_opencv__msg__Position * msg)
{
  if (!msg) {
    return false;
  }
  // red_x_pos
  // red_y_pos
  // blue_x_pos
  // blue_y_pos
  // yellow_x_pos
  // yellow_y_pos
  return true;
}

void
tugas_opencv__msg__Position__fini(tugas_opencv__msg__Position * msg)
{
  if (!msg) {
    return;
  }
  // red_x_pos
  // red_y_pos
  // blue_x_pos
  // blue_y_pos
  // yellow_x_pos
  // yellow_y_pos
}

bool
tugas_opencv__msg__Position__are_equal(const tugas_opencv__msg__Position * lhs, const tugas_opencv__msg__Position * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // red_x_pos
  if (lhs->red_x_pos != rhs->red_x_pos) {
    return false;
  }
  // red_y_pos
  if (lhs->red_y_pos != rhs->red_y_pos) {
    return false;
  }
  // blue_x_pos
  if (lhs->blue_x_pos != rhs->blue_x_pos) {
    return false;
  }
  // blue_y_pos
  if (lhs->blue_y_pos != rhs->blue_y_pos) {
    return false;
  }
  // yellow_x_pos
  if (lhs->yellow_x_pos != rhs->yellow_x_pos) {
    return false;
  }
  // yellow_y_pos
  if (lhs->yellow_y_pos != rhs->yellow_y_pos) {
    return false;
  }
  return true;
}

bool
tugas_opencv__msg__Position__copy(
  const tugas_opencv__msg__Position * input,
  tugas_opencv__msg__Position * output)
{
  if (!input || !output) {
    return false;
  }
  // red_x_pos
  output->red_x_pos = input->red_x_pos;
  // red_y_pos
  output->red_y_pos = input->red_y_pos;
  // blue_x_pos
  output->blue_x_pos = input->blue_x_pos;
  // blue_y_pos
  output->blue_y_pos = input->blue_y_pos;
  // yellow_x_pos
  output->yellow_x_pos = input->yellow_x_pos;
  // yellow_y_pos
  output->yellow_y_pos = input->yellow_y_pos;
  return true;
}

tugas_opencv__msg__Position *
tugas_opencv__msg__Position__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tugas_opencv__msg__Position * msg = (tugas_opencv__msg__Position *)allocator.allocate(sizeof(tugas_opencv__msg__Position), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tugas_opencv__msg__Position));
  bool success = tugas_opencv__msg__Position__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tugas_opencv__msg__Position__destroy(tugas_opencv__msg__Position * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tugas_opencv__msg__Position__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tugas_opencv__msg__Position__Sequence__init(tugas_opencv__msg__Position__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tugas_opencv__msg__Position * data = NULL;

  if (size) {
    data = (tugas_opencv__msg__Position *)allocator.zero_allocate(size, sizeof(tugas_opencv__msg__Position), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tugas_opencv__msg__Position__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tugas_opencv__msg__Position__fini(&data[i - 1]);
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
tugas_opencv__msg__Position__Sequence__fini(tugas_opencv__msg__Position__Sequence * array)
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
      tugas_opencv__msg__Position__fini(&array->data[i]);
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

tugas_opencv__msg__Position__Sequence *
tugas_opencv__msg__Position__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tugas_opencv__msg__Position__Sequence * array = (tugas_opencv__msg__Position__Sequence *)allocator.allocate(sizeof(tugas_opencv__msg__Position__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tugas_opencv__msg__Position__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tugas_opencv__msg__Position__Sequence__destroy(tugas_opencv__msg__Position__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tugas_opencv__msg__Position__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tugas_opencv__msg__Position__Sequence__are_equal(const tugas_opencv__msg__Position__Sequence * lhs, const tugas_opencv__msg__Position__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tugas_opencv__msg__Position__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tugas_opencv__msg__Position__Sequence__copy(
  const tugas_opencv__msg__Position__Sequence * input,
  tugas_opencv__msg__Position__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tugas_opencv__msg__Position);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tugas_opencv__msg__Position * data =
      (tugas_opencv__msg__Position *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tugas_opencv__msg__Position__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tugas_opencv__msg__Position__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tugas_opencv__msg__Position__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
