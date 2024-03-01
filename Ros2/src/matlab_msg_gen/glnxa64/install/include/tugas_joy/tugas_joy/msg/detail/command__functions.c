// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tugas_joy:msg/Command.idl
// generated code does not contain a copyright notice
#include "tugas_joy/msg/detail/command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tugas_joy__msg__Command__init(tugas_joy__msg__Command * msg)
{
  if (!msg) {
    return false;
  }
  // x_cmd
  // y_cmd
  // yaw
  // depth
  // x_button
  return true;
}

void
tugas_joy__msg__Command__fini(tugas_joy__msg__Command * msg)
{
  if (!msg) {
    return;
  }
  // x_cmd
  // y_cmd
  // yaw
  // depth
  // x_button
}

bool
tugas_joy__msg__Command__are_equal(const tugas_joy__msg__Command * lhs, const tugas_joy__msg__Command * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x_cmd
  if (lhs->x_cmd != rhs->x_cmd) {
    return false;
  }
  // y_cmd
  if (lhs->y_cmd != rhs->y_cmd) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // depth
  if (lhs->depth != rhs->depth) {
    return false;
  }
  // x_button
  if (lhs->x_button != rhs->x_button) {
    return false;
  }
  return true;
}

bool
tugas_joy__msg__Command__copy(
  const tugas_joy__msg__Command * input,
  tugas_joy__msg__Command * output)
{
  if (!input || !output) {
    return false;
  }
  // x_cmd
  output->x_cmd = input->x_cmd;
  // y_cmd
  output->y_cmd = input->y_cmd;
  // yaw
  output->yaw = input->yaw;
  // depth
  output->depth = input->depth;
  // x_button
  output->x_button = input->x_button;
  return true;
}

tugas_joy__msg__Command *
tugas_joy__msg__Command__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tugas_joy__msg__Command * msg = (tugas_joy__msg__Command *)allocator.allocate(sizeof(tugas_joy__msg__Command), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tugas_joy__msg__Command));
  bool success = tugas_joy__msg__Command__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tugas_joy__msg__Command__destroy(tugas_joy__msg__Command * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tugas_joy__msg__Command__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tugas_joy__msg__Command__Sequence__init(tugas_joy__msg__Command__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tugas_joy__msg__Command * data = NULL;

  if (size) {
    data = (tugas_joy__msg__Command *)allocator.zero_allocate(size, sizeof(tugas_joy__msg__Command), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tugas_joy__msg__Command__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tugas_joy__msg__Command__fini(&data[i - 1]);
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
tugas_joy__msg__Command__Sequence__fini(tugas_joy__msg__Command__Sequence * array)
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
      tugas_joy__msg__Command__fini(&array->data[i]);
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

tugas_joy__msg__Command__Sequence *
tugas_joy__msg__Command__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tugas_joy__msg__Command__Sequence * array = (tugas_joy__msg__Command__Sequence *)allocator.allocate(sizeof(tugas_joy__msg__Command__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tugas_joy__msg__Command__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tugas_joy__msg__Command__Sequence__destroy(tugas_joy__msg__Command__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tugas_joy__msg__Command__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tugas_joy__msg__Command__Sequence__are_equal(const tugas_joy__msg__Command__Sequence * lhs, const tugas_joy__msg__Command__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tugas_joy__msg__Command__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tugas_joy__msg__Command__Sequence__copy(
  const tugas_joy__msg__Command__Sequence * input,
  tugas_joy__msg__Command__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tugas_joy__msg__Command);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tugas_joy__msg__Command * data =
      (tugas_joy__msg__Command *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tugas_joy__msg__Command__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tugas_joy__msg__Command__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tugas_joy__msg__Command__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
