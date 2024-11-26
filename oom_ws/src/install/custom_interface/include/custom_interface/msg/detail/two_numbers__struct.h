// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interface:msg/TwoNumbers.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__MSG__DETAIL__TWO_NUMBERS__STRUCT_H_
#define CUSTOM_INTERFACE__MSG__DETAIL__TWO_NUMBERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'op'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/TwoNumbers in the package custom_interface.
typedef struct custom_interface__msg__TwoNumbers
{
  int32_t a;
  int32_t b;
  rosidl_runtime_c__String op;
} custom_interface__msg__TwoNumbers;

// Struct for a sequence of custom_interface__msg__TwoNumbers.
typedef struct custom_interface__msg__TwoNumbers__Sequence
{
  custom_interface__msg__TwoNumbers * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interface__msg__TwoNumbers__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACE__MSG__DETAIL__TWO_NUMBERS__STRUCT_H_
