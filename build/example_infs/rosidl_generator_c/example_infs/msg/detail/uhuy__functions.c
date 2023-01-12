// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from example_infs:msg/Uhuy.idl
// generated code does not contain a copyright notice
#include "example_infs/msg/detail/uhuy__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `uhuy`
// Member `command`
#include "rosidl_runtime_c/string_functions.h"

bool
example_infs__msg__Uhuy__init(example_infs__msg__Uhuy * msg)
{
  if (!msg) {
    return false;
  }
  // uhuy
  if (!rosidl_runtime_c__String__init(&msg->uhuy)) {
    example_infs__msg__Uhuy__fini(msg);
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    example_infs__msg__Uhuy__fini(msg);
    return false;
  }
  return true;
}

void
example_infs__msg__Uhuy__fini(example_infs__msg__Uhuy * msg)
{
  if (!msg) {
    return;
  }
  // uhuy
  rosidl_runtime_c__String__fini(&msg->uhuy);
  // command
  rosidl_runtime_c__String__fini(&msg->command);
}

bool
example_infs__msg__Uhuy__are_equal(const example_infs__msg__Uhuy * lhs, const example_infs__msg__Uhuy * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // uhuy
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->uhuy), &(rhs->uhuy)))
  {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  return true;
}

bool
example_infs__msg__Uhuy__copy(
  const example_infs__msg__Uhuy * input,
  example_infs__msg__Uhuy * output)
{
  if (!input || !output) {
    return false;
  }
  // uhuy
  if (!rosidl_runtime_c__String__copy(
      &(input->uhuy), &(output->uhuy)))
  {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  return true;
}

example_infs__msg__Uhuy *
example_infs__msg__Uhuy__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__msg__Uhuy * msg = (example_infs__msg__Uhuy *)allocator.allocate(sizeof(example_infs__msg__Uhuy), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(example_infs__msg__Uhuy));
  bool success = example_infs__msg__Uhuy__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
example_infs__msg__Uhuy__destroy(example_infs__msg__Uhuy * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    example_infs__msg__Uhuy__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
example_infs__msg__Uhuy__Sequence__init(example_infs__msg__Uhuy__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__msg__Uhuy * data = NULL;

  if (size) {
    data = (example_infs__msg__Uhuy *)allocator.zero_allocate(size, sizeof(example_infs__msg__Uhuy), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = example_infs__msg__Uhuy__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        example_infs__msg__Uhuy__fini(&data[i - 1]);
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
example_infs__msg__Uhuy__Sequence__fini(example_infs__msg__Uhuy__Sequence * array)
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
      example_infs__msg__Uhuy__fini(&array->data[i]);
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

example_infs__msg__Uhuy__Sequence *
example_infs__msg__Uhuy__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__msg__Uhuy__Sequence * array = (example_infs__msg__Uhuy__Sequence *)allocator.allocate(sizeof(example_infs__msg__Uhuy__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = example_infs__msg__Uhuy__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
example_infs__msg__Uhuy__Sequence__destroy(example_infs__msg__Uhuy__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    example_infs__msg__Uhuy__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
example_infs__msg__Uhuy__Sequence__are_equal(const example_infs__msg__Uhuy__Sequence * lhs, const example_infs__msg__Uhuy__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!example_infs__msg__Uhuy__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
example_infs__msg__Uhuy__Sequence__copy(
  const example_infs__msg__Uhuy__Sequence * input,
  example_infs__msg__Uhuy__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(example_infs__msg__Uhuy);
    example_infs__msg__Uhuy * data =
      (example_infs__msg__Uhuy *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!example_infs__msg__Uhuy__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          example_infs__msg__Uhuy__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!example_infs__msg__Uhuy__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
