// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from controller_manager_msgs:srv/SetHardwareComponentState.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SET_HARDWARE_COMPONENT_STATE__FUNCTIONS_H_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SET_HARDWARE_COMPONENT_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "controller_manager_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "controller_manager_msgs/srv/detail/set_hardware_component_state__struct.h"

/// Initialize srv/SetHardwareComponentState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * controller_manager_msgs__srv__SetHardwareComponentState_Request
 * )) before or use
 * controller_manager_msgs__srv__SetHardwareComponentState_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
bool
controller_manager_msgs__srv__SetHardwareComponentState_Request__init(controller_manager_msgs__srv__SetHardwareComponentState_Request * msg);

/// Finalize srv/SetHardwareComponentState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
void
controller_manager_msgs__srv__SetHardwareComponentState_Request__fini(controller_manager_msgs__srv__SetHardwareComponentState_Request * msg);

/// Create srv/SetHardwareComponentState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * controller_manager_msgs__srv__SetHardwareComponentState_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
controller_manager_msgs__srv__SetHardwareComponentState_Request *
controller_manager_msgs__srv__SetHardwareComponentState_Request__create();

/// Destroy srv/SetHardwareComponentState message.
/**
 * It calls
 * controller_manager_msgs__srv__SetHardwareComponentState_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
void
controller_manager_msgs__srv__SetHardwareComponentState_Request__destroy(controller_manager_msgs__srv__SetHardwareComponentState_Request * msg);


/// Initialize array of srv/SetHardwareComponentState messages.
/**
 * It allocates the memory for the number of elements and calls
 * controller_manager_msgs__srv__SetHardwareComponentState_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
bool
controller_manager_msgs__srv__SetHardwareComponentState_Request__Sequence__init(controller_manager_msgs__srv__SetHardwareComponentState_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetHardwareComponentState messages.
/**
 * It calls
 * controller_manager_msgs__srv__SetHardwareComponentState_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
void
controller_manager_msgs__srv__SetHardwareComponentState_Request__Sequence__fini(controller_manager_msgs__srv__SetHardwareComponentState_Request__Sequence * array);

/// Create array of srv/SetHardwareComponentState messages.
/**
 * It allocates the memory for the array and calls
 * controller_manager_msgs__srv__SetHardwareComponentState_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
controller_manager_msgs__srv__SetHardwareComponentState_Request__Sequence *
controller_manager_msgs__srv__SetHardwareComponentState_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetHardwareComponentState messages.
/**
 * It calls
 * controller_manager_msgs__srv__SetHardwareComponentState_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
void
controller_manager_msgs__srv__SetHardwareComponentState_Request__Sequence__destroy(controller_manager_msgs__srv__SetHardwareComponentState_Request__Sequence * array);

/// Initialize srv/SetHardwareComponentState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * controller_manager_msgs__srv__SetHardwareComponentState_Response
 * )) before or use
 * controller_manager_msgs__srv__SetHardwareComponentState_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
bool
controller_manager_msgs__srv__SetHardwareComponentState_Response__init(controller_manager_msgs__srv__SetHardwareComponentState_Response * msg);

/// Finalize srv/SetHardwareComponentState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
void
controller_manager_msgs__srv__SetHardwareComponentState_Response__fini(controller_manager_msgs__srv__SetHardwareComponentState_Response * msg);

/// Create srv/SetHardwareComponentState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * controller_manager_msgs__srv__SetHardwareComponentState_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
controller_manager_msgs__srv__SetHardwareComponentState_Response *
controller_manager_msgs__srv__SetHardwareComponentState_Response__create();

/// Destroy srv/SetHardwareComponentState message.
/**
 * It calls
 * controller_manager_msgs__srv__SetHardwareComponentState_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
void
controller_manager_msgs__srv__SetHardwareComponentState_Response__destroy(controller_manager_msgs__srv__SetHardwareComponentState_Response * msg);


/// Initialize array of srv/SetHardwareComponentState messages.
/**
 * It allocates the memory for the number of elements and calls
 * controller_manager_msgs__srv__SetHardwareComponentState_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
bool
controller_manager_msgs__srv__SetHardwareComponentState_Response__Sequence__init(controller_manager_msgs__srv__SetHardwareComponentState_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetHardwareComponentState messages.
/**
 * It calls
 * controller_manager_msgs__srv__SetHardwareComponentState_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
void
controller_manager_msgs__srv__SetHardwareComponentState_Response__Sequence__fini(controller_manager_msgs__srv__SetHardwareComponentState_Response__Sequence * array);

/// Create array of srv/SetHardwareComponentState messages.
/**
 * It allocates the memory for the array and calls
 * controller_manager_msgs__srv__SetHardwareComponentState_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
controller_manager_msgs__srv__SetHardwareComponentState_Response__Sequence *
controller_manager_msgs__srv__SetHardwareComponentState_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetHardwareComponentState messages.
/**
 * It calls
 * controller_manager_msgs__srv__SetHardwareComponentState_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
void
controller_manager_msgs__srv__SetHardwareComponentState_Response__Sequence__destroy(controller_manager_msgs__srv__SetHardwareComponentState_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SET_HARDWARE_COMPONENT_STATE__FUNCTIONS_H_
