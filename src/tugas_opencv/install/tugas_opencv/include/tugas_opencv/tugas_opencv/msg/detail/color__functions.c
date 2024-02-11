// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tugas_opencv:msg/Color.idl
// generated code does not contain a copyright notice
#include "tugas_opencv/msg/detail/color__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tugas_opencv__msg__Color__init(tugas_opencv__msg__Color * msg)
{
  if (!msg) {
    return false;
  }
  // red
  // blue
  // green
  return true;
}

void
tugas_opencv__msg__Color__fini(tugas_opencv__msg__Color * msg)
{
  if (!msg) {
    return;
  }
  // red
  // blue
  // green
}

bool
tugas_opencv__msg__Color__are_equal(const tugas_opencv__msg__Color * lhs, const tugas_opencv__msg__Color * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // red
  if (lhs->red != rhs->red) {
    return false;
  }
  // blue
  if (lhs->blue != rhs->blue) {
    return false;
  }
  // green
  if (lhs->green != rhs->green) {
    return false;
  }
  return true;
}

bool
tugas_opencv__msg__Color__copy(
  const tugas_opencv__msg__Color * input,
  tugas_opencv__msg__Color * output)
{
  if (!input || !output) {
    return false;
  }
  // red
  output->red = input->red;
  // blue
  output->blue = input->blue;
  // green
  output->green = input->green;
  return true;
}

tugas_opencv__msg__Color *
tugas_opencv__msg__Color__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tugas_opencv__msg__Color * msg = (tugas_opencv__msg__Color *)allocator.allocate(sizeof(tugas_opencv__msg__Color), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tugas_opencv__msg__Color));
  bool success = tugas_opencv__msg__Color__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tugas_opencv__msg__Color__destroy(tugas_opencv__msg__Color * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tugas_opencv__msg__Color__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tugas_opencv__msg__Color__Sequence__init(tugas_opencv__msg__Color__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tugas_opencv__msg__Color * data = NULL;

  if (size) {
    data = (tugas_opencv__msg__Color *)allocator.zero_allocate(size, sizeof(tugas_opencv__msg__Color), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tugas_opencv__msg__Color__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tugas_opencv__msg__Color__fini(&data[i - 1]);
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
tugas_opencv__msg__Color__Sequence__fini(tugas_opencv__msg__Color__Sequence * array)
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
      tugas_opencv__msg__Color__fini(&array->data[i]);
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

tugas_opencv__msg__Color__Sequence *
tugas_opencv__msg__Color__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tugas_opencv__msg__Color__Sequence * array = (tugas_opencv__msg__Color__Sequence *)allocator.allocate(sizeof(tugas_opencv__msg__Color__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tugas_opencv__msg__Color__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tugas_opencv__msg__Color__Sequence__destroy(tugas_opencv__msg__Color__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tugas_opencv__msg__Color__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tugas_opencv__msg__Color__Sequence__are_equal(const tugas_opencv__msg__Color__Sequence * lhs, const tugas_opencv__msg__Color__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tugas_opencv__msg__Color__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tugas_opencv__msg__Color__Sequence__copy(
  const tugas_opencv__msg__Color__Sequence * input,
  tugas_opencv__msg__Color__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tugas_opencv__msg__Color);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tugas_opencv__msg__Color * data =
      (tugas_opencv__msg__Color *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tugas_opencv__msg__Color__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tugas_opencv__msg__Color__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tugas_opencv__msg__Color__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
