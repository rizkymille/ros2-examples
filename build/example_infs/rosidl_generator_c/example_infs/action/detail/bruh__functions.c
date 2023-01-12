// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from example_infs:action/Bruh.idl
// generated code does not contain a copyright notice
#include "example_infs/action/detail/bruh__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
example_infs__action__Bruh_Goal__init(example_infs__action__Bruh_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // count
  return true;
}

void
example_infs__action__Bruh_Goal__fini(example_infs__action__Bruh_Goal * msg)
{
  if (!msg) {
    return;
  }
  // count
}

bool
example_infs__action__Bruh_Goal__are_equal(const example_infs__action__Bruh_Goal * lhs, const example_infs__action__Bruh_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // count
  if (lhs->count != rhs->count) {
    return false;
  }
  return true;
}

bool
example_infs__action__Bruh_Goal__copy(
  const example_infs__action__Bruh_Goal * input,
  example_infs__action__Bruh_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // count
  output->count = input->count;
  return true;
}

example_infs__action__Bruh_Goal *
example_infs__action__Bruh_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__action__Bruh_Goal * msg = (example_infs__action__Bruh_Goal *)allocator.allocate(sizeof(example_infs__action__Bruh_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(example_infs__action__Bruh_Goal));
  bool success = example_infs__action__Bruh_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
example_infs__action__Bruh_Goal__destroy(example_infs__action__Bruh_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    example_infs__action__Bruh_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
example_infs__action__Bruh_Goal__Sequence__init(example_infs__action__Bruh_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__action__Bruh_Goal * data = NULL;

  if (size) {
    data = (example_infs__action__Bruh_Goal *)allocator.zero_allocate(size, sizeof(example_infs__action__Bruh_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = example_infs__action__Bruh_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        example_infs__action__Bruh_Goal__fini(&data[i - 1]);
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
example_infs__action__Bruh_Goal__Sequence__fini(example_infs__action__Bruh_Goal__Sequence * array)
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
      example_infs__action__Bruh_Goal__fini(&array->data[i]);
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

example_infs__action__Bruh_Goal__Sequence *
example_infs__action__Bruh_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__action__Bruh_Goal__Sequence * array = (example_infs__action__Bruh_Goal__Sequence *)allocator.allocate(sizeof(example_infs__action__Bruh_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = example_infs__action__Bruh_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
example_infs__action__Bruh_Goal__Sequence__destroy(example_infs__action__Bruh_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    example_infs__action__Bruh_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
example_infs__action__Bruh_Goal__Sequence__are_equal(const example_infs__action__Bruh_Goal__Sequence * lhs, const example_infs__action__Bruh_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!example_infs__action__Bruh_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
example_infs__action__Bruh_Goal__Sequence__copy(
  const example_infs__action__Bruh_Goal__Sequence * input,
  example_infs__action__Bruh_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(example_infs__action__Bruh_Goal);
    example_infs__action__Bruh_Goal * data =
      (example_infs__action__Bruh_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!example_infs__action__Bruh_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          example_infs__action__Bruh_Goal__fini(&data[i]);
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
    if (!example_infs__action__Bruh_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
example_infs__action__Bruh_Result__init(example_infs__action__Bruh_Result * msg)
{
  if (!msg) {
    return false;
  }
  // status
  return true;
}

void
example_infs__action__Bruh_Result__fini(example_infs__action__Bruh_Result * msg)
{
  if (!msg) {
    return;
  }
  // status
}

bool
example_infs__action__Bruh_Result__are_equal(const example_infs__action__Bruh_Result * lhs, const example_infs__action__Bruh_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
example_infs__action__Bruh_Result__copy(
  const example_infs__action__Bruh_Result * input,
  example_infs__action__Bruh_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  return true;
}

example_infs__action__Bruh_Result *
example_infs__action__Bruh_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__action__Bruh_Result * msg = (example_infs__action__Bruh_Result *)allocator.allocate(sizeof(example_infs__action__Bruh_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(example_infs__action__Bruh_Result));
  bool success = example_infs__action__Bruh_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
example_infs__action__Bruh_Result__destroy(example_infs__action__Bruh_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    example_infs__action__Bruh_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
example_infs__action__Bruh_Result__Sequence__init(example_infs__action__Bruh_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__action__Bruh_Result * data = NULL;

  if (size) {
    data = (example_infs__action__Bruh_Result *)allocator.zero_allocate(size, sizeof(example_infs__action__Bruh_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = example_infs__action__Bruh_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        example_infs__action__Bruh_Result__fini(&data[i - 1]);
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
example_infs__action__Bruh_Result__Sequence__fini(example_infs__action__Bruh_Result__Sequence * array)
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
      example_infs__action__Bruh_Result__fini(&array->data[i]);
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

example_infs__action__Bruh_Result__Sequence *
example_infs__action__Bruh_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__action__Bruh_Result__Sequence * array = (example_infs__action__Bruh_Result__Sequence *)allocator.allocate(sizeof(example_infs__action__Bruh_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = example_infs__action__Bruh_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
example_infs__action__Bruh_Result__Sequence__destroy(example_infs__action__Bruh_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    example_infs__action__Bruh_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
example_infs__action__Bruh_Result__Sequence__are_equal(const example_infs__action__Bruh_Result__Sequence * lhs, const example_infs__action__Bruh_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!example_infs__action__Bruh_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
example_infs__action__Bruh_Result__Sequence__copy(
  const example_infs__action__Bruh_Result__Sequence * input,
  example_infs__action__Bruh_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(example_infs__action__Bruh_Result);
    example_infs__action__Bruh_Result * data =
      (example_infs__action__Bruh_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!example_infs__action__Bruh_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          example_infs__action__Bruh_Result__fini(&data[i]);
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
    if (!example_infs__action__Bruh_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `bruh`
#include "rosidl_runtime_c/string_functions.h"

bool
example_infs__action__Bruh_Feedback__init(example_infs__action__Bruh_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // bruh
  if (!rosidl_runtime_c__String__init(&msg->bruh)) {
    example_infs__action__Bruh_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
example_infs__action__Bruh_Feedback__fini(example_infs__action__Bruh_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // bruh
  rosidl_runtime_c__String__fini(&msg->bruh);
}

bool
example_infs__action__Bruh_Feedback__are_equal(const example_infs__action__Bruh_Feedback * lhs, const example_infs__action__Bruh_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bruh
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->bruh), &(rhs->bruh)))
  {
    return false;
  }
  return true;
}

bool
example_infs__action__Bruh_Feedback__copy(
  const example_infs__action__Bruh_Feedback * input,
  example_infs__action__Bruh_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // bruh
  if (!rosidl_runtime_c__String__copy(
      &(input->bruh), &(output->bruh)))
  {
    return false;
  }
  return true;
}

example_infs__action__Bruh_Feedback *
example_infs__action__Bruh_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__action__Bruh_Feedback * msg = (example_infs__action__Bruh_Feedback *)allocator.allocate(sizeof(example_infs__action__Bruh_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(example_infs__action__Bruh_Feedback));
  bool success = example_infs__action__Bruh_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
example_infs__action__Bruh_Feedback__destroy(example_infs__action__Bruh_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    example_infs__action__Bruh_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
example_infs__action__Bruh_Feedback__Sequence__init(example_infs__action__Bruh_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__action__Bruh_Feedback * data = NULL;

  if (size) {
    data = (example_infs__action__Bruh_Feedback *)allocator.zero_allocate(size, sizeof(example_infs__action__Bruh_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = example_infs__action__Bruh_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        example_infs__action__Bruh_Feedback__fini(&data[i - 1]);
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
example_infs__action__Bruh_Feedback__Sequence__fini(example_infs__action__Bruh_Feedback__Sequence * array)
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
      example_infs__action__Bruh_Feedback__fini(&array->data[i]);
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

example_infs__action__Bruh_Feedback__Sequence *
example_infs__action__Bruh_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__action__Bruh_Feedback__Sequence * array = (example_infs__action__Bruh_Feedback__Sequence *)allocator.allocate(sizeof(example_infs__action__Bruh_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = example_infs__action__Bruh_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
example_infs__action__Bruh_Feedback__Sequence__destroy(example_infs__action__Bruh_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    example_infs__action__Bruh_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
example_infs__action__Bruh_Feedback__Sequence__are_equal(const example_infs__action__Bruh_Feedback__Sequence * lhs, const example_infs__action__Bruh_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!example_infs__action__Bruh_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
example_infs__action__Bruh_Feedback__Sequence__copy(
  const example_infs__action__Bruh_Feedback__Sequence * input,
  example_infs__action__Bruh_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(example_infs__action__Bruh_Feedback);
    example_infs__action__Bruh_Feedback * data =
      (example_infs__action__Bruh_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!example_infs__action__Bruh_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          example_infs__action__Bruh_Feedback__fini(&data[i]);
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
    if (!example_infs__action__Bruh_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "example_infs/action/detail/bruh__functions.h"

bool
example_infs__action__Bruh_SendGoal_Request__init(example_infs__action__Bruh_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    example_infs__action__Bruh_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!example_infs__action__Bruh_Goal__init(&msg->goal)) {
    example_infs__action__Bruh_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
example_infs__action__Bruh_SendGoal_Request__fini(example_infs__action__Bruh_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  example_infs__action__Bruh_Goal__fini(&msg->goal);
}

bool
example_infs__action__Bruh_SendGoal_Request__are_equal(const example_infs__action__Bruh_SendGoal_Request * lhs, const example_infs__action__Bruh_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!example_infs__action__Bruh_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
example_infs__action__Bruh_SendGoal_Request__copy(
  const example_infs__action__Bruh_SendGoal_Request * input,
  example_infs__action__Bruh_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!example_infs__action__Bruh_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

example_infs__action__Bruh_SendGoal_Request *
example_infs__action__Bruh_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__action__Bruh_SendGoal_Request * msg = (example_infs__action__Bruh_SendGoal_Request *)allocator.allocate(sizeof(example_infs__action__Bruh_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(example_infs__action__Bruh_SendGoal_Request));
  bool success = example_infs__action__Bruh_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
example_infs__action__Bruh_SendGoal_Request__destroy(example_infs__action__Bruh_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    example_infs__action__Bruh_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
example_infs__action__Bruh_SendGoal_Request__Sequence__init(example_infs__action__Bruh_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__action__Bruh_SendGoal_Request * data = NULL;

  if (size) {
    data = (example_infs__action__Bruh_SendGoal_Request *)allocator.zero_allocate(size, sizeof(example_infs__action__Bruh_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = example_infs__action__Bruh_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        example_infs__action__Bruh_SendGoal_Request__fini(&data[i - 1]);
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
example_infs__action__Bruh_SendGoal_Request__Sequence__fini(example_infs__action__Bruh_SendGoal_Request__Sequence * array)
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
      example_infs__action__Bruh_SendGoal_Request__fini(&array->data[i]);
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

example_infs__action__Bruh_SendGoal_Request__Sequence *
example_infs__action__Bruh_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__action__Bruh_SendGoal_Request__Sequence * array = (example_infs__action__Bruh_SendGoal_Request__Sequence *)allocator.allocate(sizeof(example_infs__action__Bruh_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = example_infs__action__Bruh_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
example_infs__action__Bruh_SendGoal_Request__Sequence__destroy(example_infs__action__Bruh_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    example_infs__action__Bruh_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
example_infs__action__Bruh_SendGoal_Request__Sequence__are_equal(const example_infs__action__Bruh_SendGoal_Request__Sequence * lhs, const example_infs__action__Bruh_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!example_infs__action__Bruh_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
example_infs__action__Bruh_SendGoal_Request__Sequence__copy(
  const example_infs__action__Bruh_SendGoal_Request__Sequence * input,
  example_infs__action__Bruh_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(example_infs__action__Bruh_SendGoal_Request);
    example_infs__action__Bruh_SendGoal_Request * data =
      (example_infs__action__Bruh_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!example_infs__action__Bruh_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          example_infs__action__Bruh_SendGoal_Request__fini(&data[i]);
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
    if (!example_infs__action__Bruh_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
example_infs__action__Bruh_SendGoal_Response__init(example_infs__action__Bruh_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    example_infs__action__Bruh_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
example_infs__action__Bruh_SendGoal_Response__fini(example_infs__action__Bruh_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
example_infs__action__Bruh_SendGoal_Response__are_equal(const example_infs__action__Bruh_SendGoal_Response * lhs, const example_infs__action__Bruh_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
example_infs__action__Bruh_SendGoal_Response__copy(
  const example_infs__action__Bruh_SendGoal_Response * input,
  example_infs__action__Bruh_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

example_infs__action__Bruh_SendGoal_Response *
example_infs__action__Bruh_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__action__Bruh_SendGoal_Response * msg = (example_infs__action__Bruh_SendGoal_Response *)allocator.allocate(sizeof(example_infs__action__Bruh_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(example_infs__action__Bruh_SendGoal_Response));
  bool success = example_infs__action__Bruh_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
example_infs__action__Bruh_SendGoal_Response__destroy(example_infs__action__Bruh_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    example_infs__action__Bruh_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
example_infs__action__Bruh_SendGoal_Response__Sequence__init(example_infs__action__Bruh_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__action__Bruh_SendGoal_Response * data = NULL;

  if (size) {
    data = (example_infs__action__Bruh_SendGoal_Response *)allocator.zero_allocate(size, sizeof(example_infs__action__Bruh_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = example_infs__action__Bruh_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        example_infs__action__Bruh_SendGoal_Response__fini(&data[i - 1]);
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
example_infs__action__Bruh_SendGoal_Response__Sequence__fini(example_infs__action__Bruh_SendGoal_Response__Sequence * array)
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
      example_infs__action__Bruh_SendGoal_Response__fini(&array->data[i]);
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

example_infs__action__Bruh_SendGoal_Response__Sequence *
example_infs__action__Bruh_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__action__Bruh_SendGoal_Response__Sequence * array = (example_infs__action__Bruh_SendGoal_Response__Sequence *)allocator.allocate(sizeof(example_infs__action__Bruh_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = example_infs__action__Bruh_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
example_infs__action__Bruh_SendGoal_Response__Sequence__destroy(example_infs__action__Bruh_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    example_infs__action__Bruh_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
example_infs__action__Bruh_SendGoal_Response__Sequence__are_equal(const example_infs__action__Bruh_SendGoal_Response__Sequence * lhs, const example_infs__action__Bruh_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!example_infs__action__Bruh_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
example_infs__action__Bruh_SendGoal_Response__Sequence__copy(
  const example_infs__action__Bruh_SendGoal_Response__Sequence * input,
  example_infs__action__Bruh_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(example_infs__action__Bruh_SendGoal_Response);
    example_infs__action__Bruh_SendGoal_Response * data =
      (example_infs__action__Bruh_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!example_infs__action__Bruh_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          example_infs__action__Bruh_SendGoal_Response__fini(&data[i]);
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
    if (!example_infs__action__Bruh_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
example_infs__action__Bruh_GetResult_Request__init(example_infs__action__Bruh_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    example_infs__action__Bruh_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
example_infs__action__Bruh_GetResult_Request__fini(example_infs__action__Bruh_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
example_infs__action__Bruh_GetResult_Request__are_equal(const example_infs__action__Bruh_GetResult_Request * lhs, const example_infs__action__Bruh_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
example_infs__action__Bruh_GetResult_Request__copy(
  const example_infs__action__Bruh_GetResult_Request * input,
  example_infs__action__Bruh_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

example_infs__action__Bruh_GetResult_Request *
example_infs__action__Bruh_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__action__Bruh_GetResult_Request * msg = (example_infs__action__Bruh_GetResult_Request *)allocator.allocate(sizeof(example_infs__action__Bruh_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(example_infs__action__Bruh_GetResult_Request));
  bool success = example_infs__action__Bruh_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
example_infs__action__Bruh_GetResult_Request__destroy(example_infs__action__Bruh_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    example_infs__action__Bruh_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
example_infs__action__Bruh_GetResult_Request__Sequence__init(example_infs__action__Bruh_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__action__Bruh_GetResult_Request * data = NULL;

  if (size) {
    data = (example_infs__action__Bruh_GetResult_Request *)allocator.zero_allocate(size, sizeof(example_infs__action__Bruh_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = example_infs__action__Bruh_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        example_infs__action__Bruh_GetResult_Request__fini(&data[i - 1]);
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
example_infs__action__Bruh_GetResult_Request__Sequence__fini(example_infs__action__Bruh_GetResult_Request__Sequence * array)
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
      example_infs__action__Bruh_GetResult_Request__fini(&array->data[i]);
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

example_infs__action__Bruh_GetResult_Request__Sequence *
example_infs__action__Bruh_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__action__Bruh_GetResult_Request__Sequence * array = (example_infs__action__Bruh_GetResult_Request__Sequence *)allocator.allocate(sizeof(example_infs__action__Bruh_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = example_infs__action__Bruh_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
example_infs__action__Bruh_GetResult_Request__Sequence__destroy(example_infs__action__Bruh_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    example_infs__action__Bruh_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
example_infs__action__Bruh_GetResult_Request__Sequence__are_equal(const example_infs__action__Bruh_GetResult_Request__Sequence * lhs, const example_infs__action__Bruh_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!example_infs__action__Bruh_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
example_infs__action__Bruh_GetResult_Request__Sequence__copy(
  const example_infs__action__Bruh_GetResult_Request__Sequence * input,
  example_infs__action__Bruh_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(example_infs__action__Bruh_GetResult_Request);
    example_infs__action__Bruh_GetResult_Request * data =
      (example_infs__action__Bruh_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!example_infs__action__Bruh_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          example_infs__action__Bruh_GetResult_Request__fini(&data[i]);
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
    if (!example_infs__action__Bruh_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "example_infs/action/detail/bruh__functions.h"

bool
example_infs__action__Bruh_GetResult_Response__init(example_infs__action__Bruh_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!example_infs__action__Bruh_Result__init(&msg->result)) {
    example_infs__action__Bruh_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
example_infs__action__Bruh_GetResult_Response__fini(example_infs__action__Bruh_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  example_infs__action__Bruh_Result__fini(&msg->result);
}

bool
example_infs__action__Bruh_GetResult_Response__are_equal(const example_infs__action__Bruh_GetResult_Response * lhs, const example_infs__action__Bruh_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!example_infs__action__Bruh_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
example_infs__action__Bruh_GetResult_Response__copy(
  const example_infs__action__Bruh_GetResult_Response * input,
  example_infs__action__Bruh_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!example_infs__action__Bruh_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

example_infs__action__Bruh_GetResult_Response *
example_infs__action__Bruh_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__action__Bruh_GetResult_Response * msg = (example_infs__action__Bruh_GetResult_Response *)allocator.allocate(sizeof(example_infs__action__Bruh_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(example_infs__action__Bruh_GetResult_Response));
  bool success = example_infs__action__Bruh_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
example_infs__action__Bruh_GetResult_Response__destroy(example_infs__action__Bruh_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    example_infs__action__Bruh_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
example_infs__action__Bruh_GetResult_Response__Sequence__init(example_infs__action__Bruh_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__action__Bruh_GetResult_Response * data = NULL;

  if (size) {
    data = (example_infs__action__Bruh_GetResult_Response *)allocator.zero_allocate(size, sizeof(example_infs__action__Bruh_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = example_infs__action__Bruh_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        example_infs__action__Bruh_GetResult_Response__fini(&data[i - 1]);
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
example_infs__action__Bruh_GetResult_Response__Sequence__fini(example_infs__action__Bruh_GetResult_Response__Sequence * array)
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
      example_infs__action__Bruh_GetResult_Response__fini(&array->data[i]);
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

example_infs__action__Bruh_GetResult_Response__Sequence *
example_infs__action__Bruh_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__action__Bruh_GetResult_Response__Sequence * array = (example_infs__action__Bruh_GetResult_Response__Sequence *)allocator.allocate(sizeof(example_infs__action__Bruh_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = example_infs__action__Bruh_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
example_infs__action__Bruh_GetResult_Response__Sequence__destroy(example_infs__action__Bruh_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    example_infs__action__Bruh_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
example_infs__action__Bruh_GetResult_Response__Sequence__are_equal(const example_infs__action__Bruh_GetResult_Response__Sequence * lhs, const example_infs__action__Bruh_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!example_infs__action__Bruh_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
example_infs__action__Bruh_GetResult_Response__Sequence__copy(
  const example_infs__action__Bruh_GetResult_Response__Sequence * input,
  example_infs__action__Bruh_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(example_infs__action__Bruh_GetResult_Response);
    example_infs__action__Bruh_GetResult_Response * data =
      (example_infs__action__Bruh_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!example_infs__action__Bruh_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          example_infs__action__Bruh_GetResult_Response__fini(&data[i]);
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
    if (!example_infs__action__Bruh_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "example_infs/action/detail/bruh__functions.h"

bool
example_infs__action__Bruh_FeedbackMessage__init(example_infs__action__Bruh_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    example_infs__action__Bruh_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!example_infs__action__Bruh_Feedback__init(&msg->feedback)) {
    example_infs__action__Bruh_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
example_infs__action__Bruh_FeedbackMessage__fini(example_infs__action__Bruh_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  example_infs__action__Bruh_Feedback__fini(&msg->feedback);
}

bool
example_infs__action__Bruh_FeedbackMessage__are_equal(const example_infs__action__Bruh_FeedbackMessage * lhs, const example_infs__action__Bruh_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!example_infs__action__Bruh_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
example_infs__action__Bruh_FeedbackMessage__copy(
  const example_infs__action__Bruh_FeedbackMessage * input,
  example_infs__action__Bruh_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!example_infs__action__Bruh_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

example_infs__action__Bruh_FeedbackMessage *
example_infs__action__Bruh_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__action__Bruh_FeedbackMessage * msg = (example_infs__action__Bruh_FeedbackMessage *)allocator.allocate(sizeof(example_infs__action__Bruh_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(example_infs__action__Bruh_FeedbackMessage));
  bool success = example_infs__action__Bruh_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
example_infs__action__Bruh_FeedbackMessage__destroy(example_infs__action__Bruh_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    example_infs__action__Bruh_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
example_infs__action__Bruh_FeedbackMessage__Sequence__init(example_infs__action__Bruh_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__action__Bruh_FeedbackMessage * data = NULL;

  if (size) {
    data = (example_infs__action__Bruh_FeedbackMessage *)allocator.zero_allocate(size, sizeof(example_infs__action__Bruh_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = example_infs__action__Bruh_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        example_infs__action__Bruh_FeedbackMessage__fini(&data[i - 1]);
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
example_infs__action__Bruh_FeedbackMessage__Sequence__fini(example_infs__action__Bruh_FeedbackMessage__Sequence * array)
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
      example_infs__action__Bruh_FeedbackMessage__fini(&array->data[i]);
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

example_infs__action__Bruh_FeedbackMessage__Sequence *
example_infs__action__Bruh_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_infs__action__Bruh_FeedbackMessage__Sequence * array = (example_infs__action__Bruh_FeedbackMessage__Sequence *)allocator.allocate(sizeof(example_infs__action__Bruh_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = example_infs__action__Bruh_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
example_infs__action__Bruh_FeedbackMessage__Sequence__destroy(example_infs__action__Bruh_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    example_infs__action__Bruh_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
example_infs__action__Bruh_FeedbackMessage__Sequence__are_equal(const example_infs__action__Bruh_FeedbackMessage__Sequence * lhs, const example_infs__action__Bruh_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!example_infs__action__Bruh_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
example_infs__action__Bruh_FeedbackMessage__Sequence__copy(
  const example_infs__action__Bruh_FeedbackMessage__Sequence * input,
  example_infs__action__Bruh_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(example_infs__action__Bruh_FeedbackMessage);
    example_infs__action__Bruh_FeedbackMessage * data =
      (example_infs__action__Bruh_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!example_infs__action__Bruh_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          example_infs__action__Bruh_FeedbackMessage__fini(&data[i]);
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
    if (!example_infs__action__Bruh_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
