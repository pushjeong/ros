// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interface:msg/TwoNumbers.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__MSG__DETAIL__TWO_NUMBERS__BUILDER_HPP_
#define CUSTOM_INTERFACE__MSG__DETAIL__TWO_NUMBERS__BUILDER_HPP_

#include "custom_interface/msg/detail/two_numbers__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interface
{

namespace msg
{

namespace builder
{

class Init_TwoNumbers_op
{
public:
  explicit Init_TwoNumbers_op(::custom_interface::msg::TwoNumbers & msg)
  : msg_(msg)
  {}
  ::custom_interface::msg::TwoNumbers op(::custom_interface::msg::TwoNumbers::_op_type arg)
  {
    msg_.op = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interface::msg::TwoNumbers msg_;
};

class Init_TwoNumbers_b
{
public:
  explicit Init_TwoNumbers_b(::custom_interface::msg::TwoNumbers & msg)
  : msg_(msg)
  {}
  Init_TwoNumbers_op b(::custom_interface::msg::TwoNumbers::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_TwoNumbers_op(msg_);
  }

private:
  ::custom_interface::msg::TwoNumbers msg_;
};

class Init_TwoNumbers_a
{
public:
  Init_TwoNumbers_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TwoNumbers_b a(::custom_interface::msg::TwoNumbers::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_TwoNumbers_b(msg_);
  }

private:
  ::custom_interface::msg::TwoNumbers msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interface::msg::TwoNumbers>()
{
  return custom_interface::msg::builder::Init_TwoNumbers_a();
}

}  // namespace custom_interface

#endif  // CUSTOM_INTERFACE__MSG__DETAIL__TWO_NUMBERS__BUILDER_HPP_
