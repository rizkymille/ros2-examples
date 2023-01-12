// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from example_infs:srv/Print.idl
// generated code does not contain a copyright notice
#include "example_infs/srv/detail/print__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `command`
#include "rosidl_runtime_c/string_functions.h"

bool
example_infs__srv__Print_Request__init(example_infs__srv__Print_Request * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    example_infs__srv__Print_Request__fini(msg);
    return false;
  }
  return true;
}

void
example_infs__srv__Print_Request__fini(example_infs__srv__Print_Request * msg)
{
  if (!msg) {
    return;
  }
  // command
  rosidl_runtime_c__String__fini(&msg->command);
}

bool
example_infs__srv__Print_Request__are_equal(const example_infs__srv__Print_Request * lhs, const example_infs__srv__Print_Request * rhs)
{
  if (!lhs || !rhs) {
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
example_infs__srv__Print_Request__copy(
  const example_infs__srv__Print_Request * input,
  example_infs__srv__Print_Request * output)
{
  if (!input || !output) {
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

example_infs__srv__Print_Request *
example_infs__srv__Print_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__srv__Print_Request * msg = (example_infs__srv__Print_Request *)allocator.allocate(sizeof(example_infs__srv__Print_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(example_infs__srv__Print_Request));
  bool success = example_infs__srv__Print_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
example_infs__srv__Print_Request__destroy(example_infs__srv__Print_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    example_infs__srv__Print_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
example_infs__srv__Print_Request__Sequence__init(example_infs__srv__Print_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__srv__Print_Request * data = NULL;

  if (size) {
    data = (example_infs__srv__Print_Request *)allocator.zero_allocate(size, sizeof(example_infs__srv__Print_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = example_infs__srv__Print_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        example_infs__srv__Print_Request__fini(&data[i - 1]);
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
example_infs__srv__Print_Request__Sequence__fini(example_infs__srv__Print_Request__Sequence * array)
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
      example_infs__srv__Print_Request__fini(&array->data[i]);
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

example_infs__srv__Print_Request__Sequence *
example_infs__srv__Print_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__srv__Print_Request__Sequence * array = (example_infs__srv__Print_Request__Sequence *)allocator.allocate(sizeof(example_infs__srv__Print_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = example_infs__srv__Print_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
example_infs__srv__Print_Request__Sequence__destroy(example_infs__srv__Print_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    example_infs__srv__Print_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
example_infs__srv__Print_Request__Sequence__are_equal(const example_infs__srv__Print_Request__Sequence * lhs, const example_infs__srv__Print_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!example_infs__srv__Print_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
example_infs__srv__Print_Request__Sequence__copy(
  const example_infs__srv__Print_Request__Sequence * input,
  example_infs__srv__Print_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(example_infs__srv__Print_Request);
    example_infs__srv__Print_Request * data =
      (example_infs__srv__Print_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!example_infs__srv__Print_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          example_infs__srv__Print_Request__fini(&data[i]);
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
    if (!example_infs__srv__Print_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
example_infs__srv__Print_Response__init(example_infs__srv__Print_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
example_infs__srv__Print_Response__fini(example_infs__srv__Print_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
example_infs__srv__Print_Response__are_equal(const example_infs__srv__Print_Response * lhs, const example_infs__srv__Print_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
example_infs__srv__Print_Response__copy(
  const example_infs__srv__Print_Response * input,
  example_infs__srv__Print_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

example_infs__srv__Print_Response *
example_infs__srv__Print_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__srv__Print_Response * msg = (example_infs__srv__Print_Response *)allocator.allocate(sizeof(example_infs__srv__Print_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(example_infs__srv__Print_Response));
  bool success = example_infs__srv__Print_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
example_infs__srv__Print_Response__destroy(example_infs__srv__Print_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    example_infs__srv__Print_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
example_infs__srv__Print_Response__Sequence__init(example_infs__srv__Print_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__srv__Print_Response * data = NULL;

  if (size) {
    data = (example_infs__srv__Print_Response *)allocator.zero_allocate(size, sizeof(example_infs__srv__Print_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = example_infs__srv__Print_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        example_infs__srv__Print_Response__fini(&data[i - 1]);
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
example_infs__srv__Print_Response__Sequence__fini(example_infs__srv__Print_Response__Sequence * array)
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
      example_infs__srv__Print_Response__fini(&array->data[i]);
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

example_infs__srv__Print_Response__Sequence *
example_infs__srv__Print_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__srv__Print_Response__Sequence * array = (example_infs__srv__Print_Response__Sequence *)allocator.allocate(sizeof(example_infs__srv__Print_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = example_infs__srv__Print_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
example_infs__srv__Print_Response__Sequence__destroy(example_infs__srv__Print_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    example_infs__srv__Print_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
example_infs__srv__Print_Response__Sequence__are_equal(const example_infs__srv__Print_Response__Sequence * lhs, const example_infs__srv__Print_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!example_infs__srv__Print_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
example_infs__srv__Print_Response__Sequence__copy(
  const example_infs__srv__Print_Response__Sequence * input,
  example_infs__srv__Print_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(example_infs__srv__Print_Response);
    example_infs__srv__Print_Response * data =
      (example_infs__srv__Print_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!example_infs__srv__Print_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          example_infs__srv__Print_Response__fini(&data[i]);
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
    if (!example_infs__srv__Print_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
