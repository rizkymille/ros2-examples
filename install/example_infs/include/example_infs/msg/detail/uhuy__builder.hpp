// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from example_infs:msg/Uhuy.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INFS__MSG__DETAIL__UHUY__BUILDER_HPP_
#define EXAMPLE_INFS__MSG__DETAIL__UHUY__BUILDER_HPP_

#include "example_infs/msg/detail/uhuy__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace example_infs
{

namespace msg
{

namespace builder
{

class Init_Uhuy_command
{
public:
  explicit Init_Uhuy_command(::example_infs::msg::Uhuy & msg)
  : msg_(msg)
  {}
  ::example_infs::msg::Uhuy command(::example_infs::msg::Uhuy::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_infs::msg::Uhuy msg_;
};

class Init_Uhuy_uhuy
{
public:
  Init_Uhuy_uhuy()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Uhuy_command uhuy(::example_infs::msg::Uhuy::_uhuy_type arg)
  {
    msg_.uhuy = std::move(arg);
    return Init_Uhuy_command(msg_);
  }

private:
  ::example_infs::msg::Uhuy msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_infs::msg::Uhuy>()
{
  return example_infs::msg::builder::Init_Uhuy_uhuy();
}

}  // namespace example_infs

#endif  // EXAMPLE_INFS__MSG__DETAIL__UHUY__BUILDER_HPP_
