// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from example_infs:srv/Print.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INFS__SRV__DETAIL__PRINT__TRAITS_HPP_
#define EXAMPLE_INFS__SRV__DETAIL__PRINT__TRAITS_HPP_

#include "example_infs/srv/detail/print__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_infs::srv::Print_Request>()
{
  return "example_infs::srv::Print_Request";
}

template<>
inline const char * name<example_infs::srv::Print_Request>()
{
  return "example_infs/srv/Print_Request";
}

template<>
struct has_fixed_size<example_infs::srv::Print_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<example_infs::srv::Print_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<example_infs::srv::Print_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_infs::srv::Print_Response>()
{
  return "example_infs::srv::Print_Response";
}

template<>
inline const char * name<example_infs::srv::Print_Response>()
{
  return "example_infs/srv/Print_Response";
}

template<>
struct has_fixed_size<example_infs::srv::Print_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<example_infs::srv::Print_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<example_infs::srv::Print_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_infs::srv::Print>()
{
  return "example_infs::srv::Print";
}

template<>
inline const char * name<example_infs::srv::Print>()
{
  return "example_infs/srv/Print";
}

template<>
struct has_fixed_size<example_infs::srv::Print>
  : std::integral_constant<
    bool,
    has_fixed_size<example_infs::srv::Print_Request>::value &&
    has_fixed_size<example_infs::srv::Print_Response>::value
  >
{
};

template<>
struct has_bounded_size<example_infs::srv::Print>
  : std::integral_constant<
    bool,
    has_bounded_size<example_infs::srv::Print_Request>::value &&
    has_bounded_size<example_infs::srv::Print_Response>::value
  >
{
};

template<>
struct is_service<example_infs::srv::Print>
  : std::true_type
{
};

template<>
struct is_service_request<example_infs::srv::Print_Request>
  : std::true_type
{
};

template<>
struct is_service_response<example_infs::srv::Print_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // EXAMPLE_INFS__SRV__DETAIL__PRINT__TRAITS_HPP_
