// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_infs:msg/Uhuy.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INFS__MSG__DETAIL__UHUY__STRUCT_H_
#define EXAMPLE_INFS__MSG__DETAIL__UHUY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'uhuy'
// Member 'command'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Uhuy in the package example_infs.
typedef struct example_infs__msg__Uhuy
{
  rosidl_runtime_c__String uhuy;
  rosidl_runtime_c__String command;
} example_infs__msg__Uhuy;

// Struct for a sequence of example_infs__msg__Uhuy.
typedef struct example_infs__msg__Uhuy__Sequence
{
  example_infs__msg__Uhuy * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_infs__msg__Uhuy__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INFS__MSG__DETAIL__UHUY__STRUCT_H_
