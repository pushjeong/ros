// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interface:msg/TwoNumbers.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__MSG__DETAIL__TWO_NUMBERS__STRUCT_HPP_
#define CUSTOM_INTERFACE__MSG__DETAIL__TWO_NUMBERS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_interface__msg__TwoNumbers __attribute__((deprecated))
#else
# define DEPRECATED__custom_interface__msg__TwoNumbers __declspec(deprecated)
#endif

namespace custom_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TwoNumbers_
{
  using Type = TwoNumbers_<ContainerAllocator>;

  explicit TwoNumbers_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0l;
      this->b = 0l;
      this->op = "";
    }
  }

  explicit TwoNumbers_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : op(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0l;
      this->b = 0l;
      this->op = "";
    }
  }

  // field types and members
  using _a_type =
    int32_t;
  _a_type a;
  using _b_type =
    int32_t;
  _b_type b;
  using _op_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _op_type op;

  // setters for named parameter idiom
  Type & set__a(
    const int32_t & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const int32_t & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__op(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->op = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interface::msg::TwoNumbers_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interface::msg::TwoNumbers_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interface::msg::TwoNumbers_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interface::msg::TwoNumbers_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interface::msg::TwoNumbers_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interface::msg::TwoNumbers_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interface::msg::TwoNumbers_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interface::msg::TwoNumbers_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interface::msg::TwoNumbers_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interface::msg::TwoNumbers_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interface__msg__TwoNumbers
    std::shared_ptr<custom_interface::msg::TwoNumbers_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interface__msg__TwoNumbers
    std::shared_ptr<custom_interface::msg::TwoNumbers_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TwoNumbers_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->op != other.op) {
      return false;
    }
    return true;
  }
  bool operator!=(const TwoNumbers_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TwoNumbers_

// alias to use template instance with default allocator
using TwoNumbers =
  custom_interface::msg::TwoNumbers_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interface

#endif  // CUSTOM_INTERFACE__MSG__DETAIL__TWO_NUMBERS__STRUCT_HPP_
