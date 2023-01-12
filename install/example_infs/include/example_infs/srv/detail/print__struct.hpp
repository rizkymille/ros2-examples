// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from example_infs:srv/Print.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INFS__SRV__DETAIL__PRINT__STRUCT_HPP_
#define EXAMPLE_INFS__SRV__DETAIL__PRINT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__example_infs__srv__Print_Request __attribute__((deprecated))
#else
# define DEPRECATED__example_infs__srv__Print_Request __declspec(deprecated)
#endif

namespace example_infs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Print_Request_
{
  using Type = Print_Request_<ContainerAllocator>;

  explicit Print_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
    }
  }

  explicit Print_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
    }
  }

  // field types and members
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _command_type command;

  // setters for named parameter idiom
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    example_infs::srv::Print_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const example_infs::srv::Print_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<example_infs::srv::Print_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<example_infs::srv::Print_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      example_infs::srv::Print_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<example_infs::srv::Print_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      example_infs::srv::Print_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<example_infs::srv::Print_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<example_infs::srv::Print_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<example_infs::srv::Print_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__example_infs__srv__Print_Request
    std::shared_ptr<example_infs::srv::Print_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__example_infs__srv__Print_Request
    std::shared_ptr<example_infs::srv::Print_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Print_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const Print_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Print_Request_

// alias to use template instance with default allocator
using Print_Request =
  example_infs::srv::Print_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace example_infs


#ifndef _WIN32
# define DEPRECATED__example_infs__srv__Print_Response __attribute__((deprecated))
#else
# define DEPRECATED__example_infs__srv__Print_Response __declspec(deprecated)
#endif

namespace example_infs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Print_Response_
{
  using Type = Print_Response_<ContainerAllocator>;

  explicit Print_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit Print_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    example_infs::srv::Print_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const example_infs::srv::Print_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<example_infs::srv::Print_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<example_infs::srv::Print_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      example_infs::srv::Print_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<example_infs::srv::Print_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      example_infs::srv::Print_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<example_infs::srv::Print_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<example_infs::srv::Print_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<example_infs::srv::Print_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__example_infs__srv__Print_Response
    std::shared_ptr<example_infs::srv::Print_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__example_infs__srv__Print_Response
    std::shared_ptr<example_infs::srv::Print_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Print_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const Print_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Print_Response_

// alias to use template instance with default allocator
using Print_Response =
  example_infs::srv::Print_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace example_infs

namespace example_infs
{

namespace srv
{

struct Print
{
  using Request = example_infs::srv::Print_Request;
  using Response = example_infs::srv::Print_Response;
};

}  // namespace srv

}  // namespace example_infs

#endif  // EXAMPLE_INFS__SRV__DETAIL__PRINT__STRUCT_HPP_
