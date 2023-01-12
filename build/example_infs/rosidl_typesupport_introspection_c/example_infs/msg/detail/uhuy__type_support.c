// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from example_infs:msg/Uhuy.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "example_infs/msg/detail/uhuy__rosidl_typesupport_introspection_c.h"
#include "example_infs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "example_infs/msg/detail/uhuy__functions.h"
#include "example_infs/msg/detail/uhuy__struct.h"


// Include directives for member types
// Member `uhuy`
// Member `command`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Uhuy__rosidl_typesupport_introspection_c__Uhuy_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  example_infs__msg__Uhuy__init(message_memory);
}

void Uhuy__rosidl_typesupport_introspection_c__Uhuy_fini_function(void * message_memory)
{
  example_infs__msg__Uhuy__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Uhuy__rosidl_typesupport_introspection_c__Uhuy_message_member_array[2] = {
  {
    "uhuy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(example_infs__msg__Uhuy, uhuy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(example_infs__msg__Uhuy, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Uhuy__rosidl_typesupport_introspection_c__Uhuy_message_members = {
  "example_infs__msg",  // message namespace
  "Uhuy",  // message name
  2,  // number of fields
  sizeof(example_infs__msg__Uhuy),
  Uhuy__rosidl_typesupport_introspection_c__Uhuy_message_member_array,  // message members
  Uhuy__rosidl_typesupport_introspection_c__Uhuy_init_function,  // function to initialize message memory (memory has to be allocated)
  Uhuy__rosidl_typesupport_introspection_c__Uhuy_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Uhuy__rosidl_typesupport_introspection_c__Uhuy_message_type_support_handle = {
  0,
  &Uhuy__rosidl_typesupport_introspection_c__Uhuy_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_example_infs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, msg, Uhuy)() {
  if (!Uhuy__rosidl_typesupport_introspection_c__Uhuy_message_type_support_handle.typesupport_identifier) {
    Uhuy__rosidl_typesupport_introspection_c__Uhuy_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Uhuy__rosidl_typesupport_introspection_c__Uhuy_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
