// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from example_infs:msg/Uhuy.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INFS__MSG__DETAIL__UHUY__STRUCT_HPP_
#define EXAMPLE_INFS__MSG__DETAIL__UHUY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__example_infs__msg__Uhuy __attribute__((deprecated))
#else
# define DEPRECATED__example_infs__msg__Uhuy __declspec(deprecated)
#endif

namespace example_infs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Uhuy_
{
  using Type = Uhuy_<ContainerAllocator>;

  explicit Uhuy_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uhuy = "";
      this->command = "";
    }
  }

  explicit Uhuy_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : uhuy(_alloc),
    command(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uhuy = "";
      this->command = "";
    }
  }

  // field types and members
  using _uhuy_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _uhuy_type uhuy;
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _command_type command;

  // setters for named parameter idiom
  Type & set__uhuy(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->uhuy = _arg;
    return *this;
  }
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    example_infs::msg::Uhuy_<ContainerAllocator> *;
  using ConstRawPtr =
    const example_infs::msg::Uhuy_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<example_infs::msg::Uhuy_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<example_infs::msg::Uhuy_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      example_infs::msg::Uhuy_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<example_infs::msg::Uhuy_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      example_infs::msg::Uhuy_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<example_infs::msg::Uhuy_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<example_infs::msg::Uhuy_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<example_infs::msg::Uhuy_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__example_infs__msg__Uhuy
    std::shared_ptr<example_infs::msg::Uhuy_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__example_infs__msg__Uhuy
    std::shared_ptr<example_infs::msg::Uhuy_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Uhuy_ & other) const
  {
    if (this->uhuy != other.uhuy) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const Uhuy_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Uhuy_

// alias to use template instance with default allocator
using Uhuy =
  example_infs::msg::Uhuy_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace example_infs

#endif  // EXAMPLE_INFS__MSG__DETAIL__UHUY__STRUCT_HPP_
