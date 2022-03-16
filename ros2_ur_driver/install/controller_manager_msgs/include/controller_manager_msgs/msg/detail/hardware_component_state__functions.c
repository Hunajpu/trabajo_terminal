// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from controller_manager_msgs:msg/HardwareComponentState.idl
// generated code does not contain a copyright notice
#include "controller_manager_msgs/msg/detail/hardware_component_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
// Member `type`
// Member `class_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `state`
#include "lifecycle_msgs/msg/detail/state__functions.h"
// Member `command_interfaces`
// Member `state_interfaces`
#include "controller_manager_msgs/msg/detail/hardware_interface__functions.h"

bool
controller_manager_msgs__msg__HardwareComponentState__init(controller_manager_msgs__msg__HardwareComponentState * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    controller_manager_msgs__msg__HardwareComponentState__fini(msg);
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    controller_manager_msgs__msg__HardwareComponentState__fini(msg);
    return false;
  }
  // class_type
  if (!rosidl_runtime_c__String__init(&msg->class_type)) {
    controller_manager_msgs__msg__HardwareComponentState__fini(msg);
    return false;
  }
  // state
  if (!lifecycle_msgs__msg__State__init(&msg->state)) {
    controller_manager_msgs__msg__HardwareComponentState__fini(msg);
    return false;
  }
  // command_interfaces
  if (!controller_manager_msgs__msg__HardwareInterface__Sequence__init(&msg->command_interfaces, 0)) {
    controller_manager_msgs__msg__HardwareComponentState__fini(msg);
    return false;
  }
  // state_interfaces
  if (!controller_manager_msgs__msg__HardwareInterface__Sequence__init(&msg->state_interfaces, 0)) {
    controller_manager_msgs__msg__HardwareComponentState__fini(msg);
    return false;
  }
  return true;
}

void
controller_manager_msgs__msg__HardwareComponentState__fini(controller_manager_msgs__msg__HardwareComponentState * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // class_type
  rosidl_runtime_c__String__fini(&msg->class_type);
  // state
  lifecycle_msgs__msg__State__fini(&msg->state);
  // command_interfaces
  controller_manager_msgs__msg__HardwareInterface__Sequence__fini(&msg->command_interfaces);
  // state_interfaces
  controller_manager_msgs__msg__HardwareInterface__Sequence__fini(&msg->state_interfaces);
}

controller_manager_msgs__msg__HardwareComponentState *
controller_manager_msgs__msg__HardwareComponentState__create()
{
  controller_manager_msgs__msg__HardwareComponentState * msg = (controller_manager_msgs__msg__HardwareComponentState *)malloc(sizeof(controller_manager_msgs__msg__HardwareComponentState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(controller_manager_msgs__msg__HardwareComponentState));
  bool success = controller_manager_msgs__msg__HardwareComponentState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
controller_manager_msgs__msg__HardwareComponentState__destroy(controller_manager_msgs__msg__HardwareComponentState * msg)
{
  if (msg) {
    controller_manager_msgs__msg__HardwareComponentState__fini(msg);
  }
  free(msg);
}


bool
controller_manager_msgs__msg__HardwareComponentState__Sequence__init(controller_manager_msgs__msg__HardwareComponentState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  controller_manager_msgs__msg__HardwareComponentState * data = NULL;
  if (size) {
    data = (controller_manager_msgs__msg__HardwareComponentState *)calloc(size, sizeof(controller_manager_msgs__msg__HardwareComponentState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = controller_manager_msgs__msg__HardwareComponentState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        controller_manager_msgs__msg__HardwareComponentState__fini(&data[i - 1]);
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
controller_manager_msgs__msg__HardwareComponentState__Sequence__fini(controller_manager_msgs__msg__HardwareComponentState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      controller_manager_msgs__msg__HardwareComponentState__fini(&array->data[i]);
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

controller_manager_msgs__msg__HardwareComponentState__Sequence *
controller_manager_msgs__msg__HardwareComponentState__Sequence__create(size_t size)
{
  controller_manager_msgs__msg__HardwareComponentState__Sequence * array = (controller_manager_msgs__msg__HardwareComponentState__Sequence *)malloc(sizeof(controller_manager_msgs__msg__HardwareComponentState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = controller_manager_msgs__msg__HardwareComponentState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
controller_manager_msgs__msg__HardwareComponentState__Sequence__destroy(controller_manager_msgs__msg__HardwareComponentState__Sequence * array)
{
  if (array) {
    controller_manager_msgs__msg__HardwareComponentState__Sequence__fini(array);
  }
  free(array);
}
