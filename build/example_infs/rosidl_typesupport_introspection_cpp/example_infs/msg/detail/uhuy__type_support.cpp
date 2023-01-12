// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from example_infs:msg/Uhuy.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "example_infs/msg/detail/uhuy__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace example_infs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Uhuy_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) example_infs::msg::Uhuy(_init);
}

void Uhuy_fini_function(void * message_memory)
{
  auto typed_message = static_cast<example_infs::msg::Uhuy *>(message_memory);
  typed_message->~Uhuy();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Uhuy_message_member_array[2] = {
  {
    "uhuy",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(example_infs::msg::Uhuy, uhuy),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "command",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(example_infs::msg::Uhuy, command),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Uhuy_message_members = {
  "example_infs::msg",  // message namespace
  "Uhuy",  // message name
  2,  // number of fields
  sizeof(example_infs::msg::Uhuy),
  Uhuy_message_member_array,  // message members
  Uhuy_init_function,  // function to initialize message memory (memory has to be allocated)
  Uhuy_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Uhuy_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Uhuy_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace example_infs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<example_infs::msg::Uhuy>()
{
  return &::example_infs::msg::rosidl_typesupport_introspection_cpp::Uhuy_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, example_infs, msg, Uhuy)() {
  return &::example_infs::msg::rosidl_typesupport_introspection_cpp::Uhuy_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
