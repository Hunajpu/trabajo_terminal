// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from control_msgs:msg/JointComponentTolerance.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "control_msgs/msg/detail/joint_component_tolerance__rosidl_typesupport_introspection_c.h"
#include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "control_msgs/msg/detail/joint_component_tolerance__functions.h"
#include "control_msgs/msg/detail/joint_component_tolerance__struct.h"


// Include directives for member types
// Member `joint_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void JointComponentTolerance__rosidl_typesupport_introspection_c__JointComponentTolerance_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_msgs__msg__JointComponentTolerance__init(message_memory);
}

void JointComponentTolerance__rosidl_typesupport_introspection_c__JointComponentTolerance_fini_function(void * message_memory)
{
  control_msgs__msg__JointComponentTolerance__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember JointComponentTolerance__rosidl_typesupport_introspection_c__JointComponentTolerance_message_member_array[5] = {
  {
    "joint_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__JointComponentTolerance, joint_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "component",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__JointComponentTolerance, component),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__JointComponentTolerance, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__JointComponentTolerance, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__JointComponentTolerance, acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers JointComponentTolerance__rosidl_typesupport_introspection_c__JointComponentTolerance_message_members = {
  "control_msgs__msg",  // message namespace
  "JointComponentTolerance",  // message name
  5,  // number of fields
  sizeof(control_msgs__msg__JointComponentTolerance),
  JointComponentTolerance__rosidl_typesupport_introspection_c__JointComponentTolerance_message_member_array,  // message members
  JointComponentTolerance__rosidl_typesupport_introspection_c__JointComponentTolerance_init_function,  // function to initialize message memory (memory has to be allocated)
  JointComponentTolerance__rosidl_typesupport_introspection_c__JointComponentTolerance_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t JointComponentTolerance__rosidl_typesupport_introspection_c__JointComponentTolerance_message_type_support_handle = {
  0,
  &JointComponentTolerance__rosidl_typesupport_introspection_c__JointComponentTolerance_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, msg, JointComponentTolerance)() {
  if (!JointComponentTolerance__rosidl_typesupport_introspection_c__JointComponentTolerance_message_type_support_handle.typesupport_identifier) {
    JointComponentTolerance__rosidl_typesupport_introspection_c__JointComponentTolerance_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &JointComponentTolerance__rosidl_typesupport_introspection_c__JointComponentTolerance_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
