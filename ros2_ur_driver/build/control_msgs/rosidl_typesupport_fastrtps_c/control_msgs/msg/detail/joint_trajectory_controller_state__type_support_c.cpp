// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from control_msgs:msg/JointTrajectoryControllerState.idl
// generated code does not contain a copyright notice
#include "control_msgs/msg/detail/joint_trajectory_controller_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "control_msgs/msg/detail/joint_trajectory_controller_state__struct.h"
#include "control_msgs/msg/detail/joint_trajectory_controller_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // joint_names, multi_dof_joint_names
#include "rosidl_runtime_c/string_functions.h"  // joint_names, multi_dof_joint_names
#include "std_msgs/msg/detail/header__functions.h"  // header
#include "trajectory_msgs/msg/detail/joint_trajectory_point__functions.h"  // actual, desired, error
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__functions.h"  // multi_dof_actual, multi_dof_desired, multi_dof_error

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectoryPoint)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, MultiDOFJointTrajectoryPoint)();


using _JointTrajectoryControllerState__ros_msg_type = control_msgs__msg__JointTrajectoryControllerState;

static bool _JointTrajectoryControllerState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _JointTrajectoryControllerState__ros_msg_type * ros_message = static_cast<const _JointTrajectoryControllerState__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: joint_names
  {
    size_t size = ros_message->joint_names.size;
    auto array_ptr = ros_message->joint_names.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: desired
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->desired, cdr))
    {
      return false;
    }
  }

  // Field name: actual
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->actual, cdr))
    {
      return false;
    }
  }

  // Field name: error
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->error, cdr))
    {
      return false;
    }
  }

  // Field name: multi_dof_joint_names
  {
    size_t size = ros_message->multi_dof_joint_names.size;
    auto array_ptr = ros_message->multi_dof_joint_names.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: multi_dof_desired
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, MultiDOFJointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->multi_dof_desired, cdr))
    {
      return false;
    }
  }

  // Field name: multi_dof_actual
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, MultiDOFJointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->multi_dof_actual, cdr))
    {
      return false;
    }
  }

  // Field name: multi_dof_error
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, MultiDOFJointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->multi_dof_error, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _JointTrajectoryControllerState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _JointTrajectoryControllerState__ros_msg_type * ros_message = static_cast<_JointTrajectoryControllerState__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: joint_names
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_names.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->joint_names);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->joint_names, size)) {
      return "failed to create array for field 'joint_names'";
    }
    auto array_ptr = ros_message->joint_names.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'joint_names'\n");
        return false;
      }
    }
  }

  // Field name: desired
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->desired))
    {
      return false;
    }
  }

  // Field name: actual
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->actual))
    {
      return false;
    }
  }

  // Field name: error
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->error))
    {
      return false;
    }
  }

  // Field name: multi_dof_joint_names
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->multi_dof_joint_names.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->multi_dof_joint_names);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->multi_dof_joint_names, size)) {
      return "failed to create array for field 'multi_dof_joint_names'";
    }
    auto array_ptr = ros_message->multi_dof_joint_names.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'multi_dof_joint_names'\n");
        return false;
      }
    }
  }

  // Field name: multi_dof_desired
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, MultiDOFJointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->multi_dof_desired))
    {
      return false;
    }
  }

  // Field name: multi_dof_actual
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, MultiDOFJointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->multi_dof_actual))
    {
      return false;
    }
  }

  // Field name: multi_dof_error
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, MultiDOFJointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->multi_dof_error))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
size_t get_serialized_size_control_msgs__msg__JointTrajectoryControllerState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JointTrajectoryControllerState__ros_msg_type * ros_message = static_cast<const _JointTrajectoryControllerState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name joint_names
  {
    size_t array_size = ros_message->joint_names.size;
    auto array_ptr = ros_message->joint_names.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name desired

  current_alignment += get_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
    &(ros_message->desired), current_alignment);
  // field.name actual

  current_alignment += get_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
    &(ros_message->actual), current_alignment);
  // field.name error

  current_alignment += get_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
    &(ros_message->error), current_alignment);
  // field.name multi_dof_joint_names
  {
    size_t array_size = ros_message->multi_dof_joint_names.size;
    auto array_ptr = ros_message->multi_dof_joint_names.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name multi_dof_desired

  current_alignment += get_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
    &(ros_message->multi_dof_desired), current_alignment);
  // field.name multi_dof_actual

  current_alignment += get_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
    &(ros_message->multi_dof_actual), current_alignment);
  // field.name multi_dof_error

  current_alignment += get_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
    &(ros_message->multi_dof_error), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _JointTrajectoryControllerState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_control_msgs__msg__JointTrajectoryControllerState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
size_t max_serialized_size_control_msgs__msg__JointTrajectoryControllerState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: joint_names
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: desired
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
        full_bounded, current_alignment);
    }
  }
  // member: actual
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
        full_bounded, current_alignment);
    }
  }
  // member: error
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
        full_bounded, current_alignment);
    }
  }
  // member: multi_dof_joint_names
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: multi_dof_desired
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
        full_bounded, current_alignment);
    }
  }
  // member: multi_dof_actual
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
        full_bounded, current_alignment);
    }
  }
  // member: multi_dof_error
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _JointTrajectoryControllerState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_control_msgs__msg__JointTrajectoryControllerState(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_JointTrajectoryControllerState = {
  "control_msgs::msg",
  "JointTrajectoryControllerState",
  _JointTrajectoryControllerState__cdr_serialize,
  _JointTrajectoryControllerState__cdr_deserialize,
  _JointTrajectoryControllerState__get_serialized_size,
  _JointTrajectoryControllerState__max_serialized_size
};

static rosidl_message_type_support_t _JointTrajectoryControllerState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JointTrajectoryControllerState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_msgs, msg, JointTrajectoryControllerState)() {
  return &_JointTrajectoryControllerState__type_support;
}

#if defined(__cplusplus)
}
#endif
