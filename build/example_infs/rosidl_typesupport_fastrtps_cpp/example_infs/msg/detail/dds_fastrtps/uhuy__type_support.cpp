// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from example_infs:msg/Uhuy.idl
// generated code does not contain a copyright notice
#include "example_infs/msg/detail/uhuy__rosidl_typesupport_fastrtps_cpp.hpp"
#include "example_infs/msg/detail/uhuy__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace example_infs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_example_infs
cdr_serialize(
  const example_infs::msg::Uhuy & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: uhuy
  cdr << ros_message.uhuy;
  // Member: command
  cdr << ros_message.command;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_example_infs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  example_infs::msg::Uhuy & ros_message)
{
  // Member: uhuy
  cdr >> ros_message.uhuy;

  // Member: command
  cdr >> ros_message.command;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_example_infs
get_serialized_size(
  const example_infs::msg::Uhuy & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: uhuy
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.uhuy.size() + 1);
  // Member: command
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.command.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_example_infs
max_serialized_size_Uhuy(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: uhuy
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: command
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Uhuy__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const example_infs::msg::Uhuy *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Uhuy__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<example_infs::msg::Uhuy *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Uhuy__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const example_infs::msg::Uhuy *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Uhuy__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Uhuy(full_bounded, 0);
}

static message_type_support_callbacks_t _Uhuy__callbacks = {
  "example_infs::msg",
  "Uhuy",
  _Uhuy__cdr_serialize,
  _Uhuy__cdr_deserialize,
  _Uhuy__get_serialized_size,
  _Uhuy__max_serialized_size
};

static rosidl_message_type_support_t _Uhuy__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Uhuy__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace example_infs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_example_infs
const rosidl_message_type_support_t *
get_message_type_support_handle<example_infs::msg::Uhuy>()
{
  return &example_infs::msg::typesupport_fastrtps_cpp::_Uhuy__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, example_infs, msg, Uhuy)() {
  return &example_infs::msg::typesupport_fastrtps_cpp::_Uhuy__handle;
}

#ifdef __cplusplus
}
#endif
