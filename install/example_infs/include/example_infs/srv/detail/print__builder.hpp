// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from example_infs:srv/Print.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INFS__SRV__DETAIL__PRINT__BUILDER_HPP_
#define EXAMPLE_INFS__SRV__DETAIL__PRINT__BUILDER_HPP_

#include "example_infs/srv/detail/print__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace example_infs
{

namespace srv
{

namespace builder
{

class Init_Print_Request_command
{
public:
  Init_Print_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::example_infs::srv::Print_Request command(::example_infs::srv::Print_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_infs::srv::Print_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_infs::srv::Print_Request>()
{
  return example_infs::srv::builder::Init_Print_Request_command();
}

}  // namespace example_infs


namespace example_infs
{

namespace srv
{

namespace builder
{

class Init_Print_Response_success
{
public:
  Init_Print_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::example_infs::srv::Print_Response success(::example_infs::srv::Print_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_infs::srv::Print_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_infs::srv::Print_Response>()
{
  return example_infs::srv::builder::Init_Print_Response_success();
}

}  // namespace example_infs

#endif  // EXAMPLE_INFS__SRV__DETAIL__PRINT__BUILDER_HPP_
