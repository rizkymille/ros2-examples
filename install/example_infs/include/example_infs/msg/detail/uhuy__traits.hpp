// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from example_infs:msg/Uhuy.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INFS__MSG__DETAIL__UHUY__TRAITS_HPP_
#define EXAMPLE_INFS__MSG__DETAIL__UHUY__TRAITS_HPP_

#include "example_infs/msg/detail/uhuy__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_infs::msg::Uhuy>()
{
  return "example_infs::msg::Uhuy";
}

template<>
inline const char * name<example_infs::msg::Uhuy>()
{
  return "example_infs/msg/Uhuy";
}

template<>
struct has_fixed_size<example_infs::msg::Uhuy>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<example_infs::msg::Uhuy>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<example_infs::msg::Uhuy>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EXAMPLE_INFS__MSG__DETAIL__UHUY__TRAITS_HPP_
