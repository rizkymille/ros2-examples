// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_infs:srv/Print.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INFS__SRV__DETAIL__PRINT__STRUCT_H_
#define EXAMPLE_INFS__SRV__DETAIL__PRINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/Print in the package example_infs.
typedef struct example_infs__srv__Print_Request
{
  rosidl_runtime_c__String command;
} example_infs__srv__Print_Request;

// Struct for a sequence of example_infs__srv__Print_Request.
typedef struct example_infs__srv__Print_Request__Sequence
{
  example_infs__srv__Print_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_infs__srv__Print_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Print in the package example_infs.
typedef struct example_infs__srv__Print_Response
{
  bool success;
} example_infs__srv__Print_Response;

// Struct for a sequence of example_infs__srv__Print_Response.
typedef struct example_infs__srv__Print_Response__Sequence
{
  example_infs__srv__Print_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_infs__srv__Print_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INFS__SRV__DETAIL__PRINT__STRUCT_H_
