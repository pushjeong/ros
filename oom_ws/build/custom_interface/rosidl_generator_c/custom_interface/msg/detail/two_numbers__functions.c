// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_interface:msg/TwoNumbers.idl
// generated code does not contain a copyright notice
#include "custom_interface/msg/detail/two_numbers__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `op`
#include "rosidl_runtime_c/string_functions.h"

bool
custom_interface__msg__TwoNumbers__init(custom_interface__msg__TwoNumbers * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  // op
  if (!rosidl_runtime_c__String__init(&msg->op)) {
    custom_interface__msg__TwoNumbers__fini(msg);
    return false;
  }
  return true;
}

void
custom_interface__msg__TwoNumbers__fini(custom_interface__msg__TwoNumbers * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
  // op
  rosidl_runtime_c__String__fini(&msg->op);
}

custom_interface__msg__TwoNumbers *
custom_interface__msg__TwoNumbers__create()
{
  custom_interface__msg__TwoNumbers * msg = (custom_interface__msg__TwoNumbers *)malloc(sizeof(custom_interface__msg__TwoNumbers));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interface__msg__TwoNumbers));
  bool success = custom_interface__msg__TwoNumbers__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_interface__msg__TwoNumbers__destroy(custom_interface__msg__TwoNumbers * msg)
{
  if (msg) {
    custom_interface__msg__TwoNumbers__fini(msg);
  }
  free(msg);
}


bool
custom_interface__msg__TwoNumbers__Sequence__init(custom_interface__msg__TwoNumbers__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_interface__msg__TwoNumbers * data = NULL;
  if (size) {
    data = (custom_interface__msg__TwoNumbers *)calloc(size, sizeof(custom_interface__msg__TwoNumbers));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interface__msg__TwoNumbers__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interface__msg__TwoNumbers__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_interface__msg__TwoNumbers__Sequence__fini(custom_interface__msg__TwoNumbers__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interface__msg__TwoNumbers__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_interface__msg__TwoNumbers__Sequence *
custom_interface__msg__TwoNumbers__Sequence__create(size_t size)
{
  custom_interface__msg__TwoNumbers__Sequence * array = (custom_interface__msg__TwoNumbers__Sequence *)malloc(sizeof(custom_interface__msg__TwoNumbers__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_interface__msg__TwoNumbers__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_interface__msg__TwoNumbers__Sequence__destroy(custom_interface__msg__TwoNumbers__Sequence * array)
{
  if (array) {
    custom_interface__msg__TwoNumbers__Sequence__fini(array);
  }
  free(array);
}
