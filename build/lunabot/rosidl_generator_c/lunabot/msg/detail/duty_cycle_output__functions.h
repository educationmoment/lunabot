// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from lunabot:msg/DutyCycleOutput.idl
// generated code does not contain a copyright notice

#ifndef LUNABOT__MSG__DETAIL__DUTY_CYCLE_OUTPUT__FUNCTIONS_H_
#define LUNABOT__MSG__DETAIL__DUTY_CYCLE_OUTPUT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "lunabot/msg/rosidl_generator_c__visibility_control.h"

#include "lunabot/msg/detail/duty_cycle_output__struct.h"

/// Initialize msg/DutyCycleOutput message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lunabot__msg__DutyCycleOutput
 * )) before or use
 * lunabot__msg__DutyCycleOutput__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__msg__DutyCycleOutput__init(lunabot__msg__DutyCycleOutput * msg);

/// Finalize msg/DutyCycleOutput message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__msg__DutyCycleOutput__fini(lunabot__msg__DutyCycleOutput * msg);

/// Create msg/DutyCycleOutput message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lunabot__msg__DutyCycleOutput__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
lunabot__msg__DutyCycleOutput *
lunabot__msg__DutyCycleOutput__create();

/// Destroy msg/DutyCycleOutput message.
/**
 * It calls
 * lunabot__msg__DutyCycleOutput__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__msg__DutyCycleOutput__destroy(lunabot__msg__DutyCycleOutput * msg);

/// Check for msg/DutyCycleOutput message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__msg__DutyCycleOutput__are_equal(const lunabot__msg__DutyCycleOutput * lhs, const lunabot__msg__DutyCycleOutput * rhs);

/// Copy a msg/DutyCycleOutput message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__msg__DutyCycleOutput__copy(
  const lunabot__msg__DutyCycleOutput * input,
  lunabot__msg__DutyCycleOutput * output);

/// Initialize array of msg/DutyCycleOutput messages.
/**
 * It allocates the memory for the number of elements and calls
 * lunabot__msg__DutyCycleOutput__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__msg__DutyCycleOutput__Sequence__init(lunabot__msg__DutyCycleOutput__Sequence * array, size_t size);

/// Finalize array of msg/DutyCycleOutput messages.
/**
 * It calls
 * lunabot__msg__DutyCycleOutput__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__msg__DutyCycleOutput__Sequence__fini(lunabot__msg__DutyCycleOutput__Sequence * array);

/// Create array of msg/DutyCycleOutput messages.
/**
 * It allocates the memory for the array and calls
 * lunabot__msg__DutyCycleOutput__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
lunabot__msg__DutyCycleOutput__Sequence *
lunabot__msg__DutyCycleOutput__Sequence__create(size_t size);

/// Destroy array of msg/DutyCycleOutput messages.
/**
 * It calls
 * lunabot__msg__DutyCycleOutput__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__msg__DutyCycleOutput__Sequence__destroy(lunabot__msg__DutyCycleOutput__Sequence * array);

/// Check for msg/DutyCycleOutput message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__msg__DutyCycleOutput__Sequence__are_equal(const lunabot__msg__DutyCycleOutput__Sequence * lhs, const lunabot__msg__DutyCycleOutput__Sequence * rhs);

/// Copy an array of msg/DutyCycleOutput messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__msg__DutyCycleOutput__Sequence__copy(
  const lunabot__msg__DutyCycleOutput__Sequence * input,
  lunabot__msg__DutyCycleOutput__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LUNABOT__MSG__DETAIL__DUTY_CYCLE_OUTPUT__FUNCTIONS_H_
