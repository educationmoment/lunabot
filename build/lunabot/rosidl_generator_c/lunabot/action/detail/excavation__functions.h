// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from lunabot:action/Excavation.idl
// generated code does not contain a copyright notice

#ifndef LUNABOT__ACTION__DETAIL__EXCAVATION__FUNCTIONS_H_
#define LUNABOT__ACTION__DETAIL__EXCAVATION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "lunabot/msg/rosidl_generator_c__visibility_control.h"

#include "lunabot/action/detail/excavation__struct.h"

/// Initialize action/Excavation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lunabot__action__Excavation_Goal
 * )) before or use
 * lunabot__action__Excavation_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_Goal__init(lunabot__action__Excavation_Goal * msg);

/// Finalize action/Excavation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_Goal__fini(lunabot__action__Excavation_Goal * msg);

/// Create action/Excavation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lunabot__action__Excavation_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
lunabot__action__Excavation_Goal *
lunabot__action__Excavation_Goal__create();

/// Destroy action/Excavation message.
/**
 * It calls
 * lunabot__action__Excavation_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_Goal__destroy(lunabot__action__Excavation_Goal * msg);

/// Check for action/Excavation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_Goal__are_equal(const lunabot__action__Excavation_Goal * lhs, const lunabot__action__Excavation_Goal * rhs);

/// Copy a action/Excavation message.
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
lunabot__action__Excavation_Goal__copy(
  const lunabot__action__Excavation_Goal * input,
  lunabot__action__Excavation_Goal * output);

/// Initialize array of action/Excavation messages.
/**
 * It allocates the memory for the number of elements and calls
 * lunabot__action__Excavation_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_Goal__Sequence__init(lunabot__action__Excavation_Goal__Sequence * array, size_t size);

/// Finalize array of action/Excavation messages.
/**
 * It calls
 * lunabot__action__Excavation_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_Goal__Sequence__fini(lunabot__action__Excavation_Goal__Sequence * array);

/// Create array of action/Excavation messages.
/**
 * It allocates the memory for the array and calls
 * lunabot__action__Excavation_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
lunabot__action__Excavation_Goal__Sequence *
lunabot__action__Excavation_Goal__Sequence__create(size_t size);

/// Destroy array of action/Excavation messages.
/**
 * It calls
 * lunabot__action__Excavation_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_Goal__Sequence__destroy(lunabot__action__Excavation_Goal__Sequence * array);

/// Check for action/Excavation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_Goal__Sequence__are_equal(const lunabot__action__Excavation_Goal__Sequence * lhs, const lunabot__action__Excavation_Goal__Sequence * rhs);

/// Copy an array of action/Excavation messages.
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
lunabot__action__Excavation_Goal__Sequence__copy(
  const lunabot__action__Excavation_Goal__Sequence * input,
  lunabot__action__Excavation_Goal__Sequence * output);

/// Initialize action/Excavation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lunabot__action__Excavation_Result
 * )) before or use
 * lunabot__action__Excavation_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_Result__init(lunabot__action__Excavation_Result * msg);

/// Finalize action/Excavation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_Result__fini(lunabot__action__Excavation_Result * msg);

/// Create action/Excavation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lunabot__action__Excavation_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
lunabot__action__Excavation_Result *
lunabot__action__Excavation_Result__create();

/// Destroy action/Excavation message.
/**
 * It calls
 * lunabot__action__Excavation_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_Result__destroy(lunabot__action__Excavation_Result * msg);

/// Check for action/Excavation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_Result__are_equal(const lunabot__action__Excavation_Result * lhs, const lunabot__action__Excavation_Result * rhs);

/// Copy a action/Excavation message.
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
lunabot__action__Excavation_Result__copy(
  const lunabot__action__Excavation_Result * input,
  lunabot__action__Excavation_Result * output);

/// Initialize array of action/Excavation messages.
/**
 * It allocates the memory for the number of elements and calls
 * lunabot__action__Excavation_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_Result__Sequence__init(lunabot__action__Excavation_Result__Sequence * array, size_t size);

/// Finalize array of action/Excavation messages.
/**
 * It calls
 * lunabot__action__Excavation_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_Result__Sequence__fini(lunabot__action__Excavation_Result__Sequence * array);

/// Create array of action/Excavation messages.
/**
 * It allocates the memory for the array and calls
 * lunabot__action__Excavation_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
lunabot__action__Excavation_Result__Sequence *
lunabot__action__Excavation_Result__Sequence__create(size_t size);

/// Destroy array of action/Excavation messages.
/**
 * It calls
 * lunabot__action__Excavation_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_Result__Sequence__destroy(lunabot__action__Excavation_Result__Sequence * array);

/// Check for action/Excavation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_Result__Sequence__are_equal(const lunabot__action__Excavation_Result__Sequence * lhs, const lunabot__action__Excavation_Result__Sequence * rhs);

/// Copy an array of action/Excavation messages.
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
lunabot__action__Excavation_Result__Sequence__copy(
  const lunabot__action__Excavation_Result__Sequence * input,
  lunabot__action__Excavation_Result__Sequence * output);

/// Initialize action/Excavation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lunabot__action__Excavation_Feedback
 * )) before or use
 * lunabot__action__Excavation_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_Feedback__init(lunabot__action__Excavation_Feedback * msg);

/// Finalize action/Excavation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_Feedback__fini(lunabot__action__Excavation_Feedback * msg);

/// Create action/Excavation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lunabot__action__Excavation_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
lunabot__action__Excavation_Feedback *
lunabot__action__Excavation_Feedback__create();

/// Destroy action/Excavation message.
/**
 * It calls
 * lunabot__action__Excavation_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_Feedback__destroy(lunabot__action__Excavation_Feedback * msg);

/// Check for action/Excavation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_Feedback__are_equal(const lunabot__action__Excavation_Feedback * lhs, const lunabot__action__Excavation_Feedback * rhs);

/// Copy a action/Excavation message.
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
lunabot__action__Excavation_Feedback__copy(
  const lunabot__action__Excavation_Feedback * input,
  lunabot__action__Excavation_Feedback * output);

/// Initialize array of action/Excavation messages.
/**
 * It allocates the memory for the number of elements and calls
 * lunabot__action__Excavation_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_Feedback__Sequence__init(lunabot__action__Excavation_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Excavation messages.
/**
 * It calls
 * lunabot__action__Excavation_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_Feedback__Sequence__fini(lunabot__action__Excavation_Feedback__Sequence * array);

/// Create array of action/Excavation messages.
/**
 * It allocates the memory for the array and calls
 * lunabot__action__Excavation_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
lunabot__action__Excavation_Feedback__Sequence *
lunabot__action__Excavation_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Excavation messages.
/**
 * It calls
 * lunabot__action__Excavation_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_Feedback__Sequence__destroy(lunabot__action__Excavation_Feedback__Sequence * array);

/// Check for action/Excavation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_Feedback__Sequence__are_equal(const lunabot__action__Excavation_Feedback__Sequence * lhs, const lunabot__action__Excavation_Feedback__Sequence * rhs);

/// Copy an array of action/Excavation messages.
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
lunabot__action__Excavation_Feedback__Sequence__copy(
  const lunabot__action__Excavation_Feedback__Sequence * input,
  lunabot__action__Excavation_Feedback__Sequence * output);

/// Initialize action/Excavation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lunabot__action__Excavation_SendGoal_Request
 * )) before or use
 * lunabot__action__Excavation_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_SendGoal_Request__init(lunabot__action__Excavation_SendGoal_Request * msg);

/// Finalize action/Excavation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_SendGoal_Request__fini(lunabot__action__Excavation_SendGoal_Request * msg);

/// Create action/Excavation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lunabot__action__Excavation_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
lunabot__action__Excavation_SendGoal_Request *
lunabot__action__Excavation_SendGoal_Request__create();

/// Destroy action/Excavation message.
/**
 * It calls
 * lunabot__action__Excavation_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_SendGoal_Request__destroy(lunabot__action__Excavation_SendGoal_Request * msg);

/// Check for action/Excavation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_SendGoal_Request__are_equal(const lunabot__action__Excavation_SendGoal_Request * lhs, const lunabot__action__Excavation_SendGoal_Request * rhs);

/// Copy a action/Excavation message.
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
lunabot__action__Excavation_SendGoal_Request__copy(
  const lunabot__action__Excavation_SendGoal_Request * input,
  lunabot__action__Excavation_SendGoal_Request * output);

/// Initialize array of action/Excavation messages.
/**
 * It allocates the memory for the number of elements and calls
 * lunabot__action__Excavation_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_SendGoal_Request__Sequence__init(lunabot__action__Excavation_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Excavation messages.
/**
 * It calls
 * lunabot__action__Excavation_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_SendGoal_Request__Sequence__fini(lunabot__action__Excavation_SendGoal_Request__Sequence * array);

/// Create array of action/Excavation messages.
/**
 * It allocates the memory for the array and calls
 * lunabot__action__Excavation_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
lunabot__action__Excavation_SendGoal_Request__Sequence *
lunabot__action__Excavation_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Excavation messages.
/**
 * It calls
 * lunabot__action__Excavation_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_SendGoal_Request__Sequence__destroy(lunabot__action__Excavation_SendGoal_Request__Sequence * array);

/// Check for action/Excavation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_SendGoal_Request__Sequence__are_equal(const lunabot__action__Excavation_SendGoal_Request__Sequence * lhs, const lunabot__action__Excavation_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/Excavation messages.
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
lunabot__action__Excavation_SendGoal_Request__Sequence__copy(
  const lunabot__action__Excavation_SendGoal_Request__Sequence * input,
  lunabot__action__Excavation_SendGoal_Request__Sequence * output);

/// Initialize action/Excavation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lunabot__action__Excavation_SendGoal_Response
 * )) before or use
 * lunabot__action__Excavation_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_SendGoal_Response__init(lunabot__action__Excavation_SendGoal_Response * msg);

/// Finalize action/Excavation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_SendGoal_Response__fini(lunabot__action__Excavation_SendGoal_Response * msg);

/// Create action/Excavation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lunabot__action__Excavation_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
lunabot__action__Excavation_SendGoal_Response *
lunabot__action__Excavation_SendGoal_Response__create();

/// Destroy action/Excavation message.
/**
 * It calls
 * lunabot__action__Excavation_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_SendGoal_Response__destroy(lunabot__action__Excavation_SendGoal_Response * msg);

/// Check for action/Excavation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_SendGoal_Response__are_equal(const lunabot__action__Excavation_SendGoal_Response * lhs, const lunabot__action__Excavation_SendGoal_Response * rhs);

/// Copy a action/Excavation message.
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
lunabot__action__Excavation_SendGoal_Response__copy(
  const lunabot__action__Excavation_SendGoal_Response * input,
  lunabot__action__Excavation_SendGoal_Response * output);

/// Initialize array of action/Excavation messages.
/**
 * It allocates the memory for the number of elements and calls
 * lunabot__action__Excavation_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_SendGoal_Response__Sequence__init(lunabot__action__Excavation_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Excavation messages.
/**
 * It calls
 * lunabot__action__Excavation_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_SendGoal_Response__Sequence__fini(lunabot__action__Excavation_SendGoal_Response__Sequence * array);

/// Create array of action/Excavation messages.
/**
 * It allocates the memory for the array and calls
 * lunabot__action__Excavation_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
lunabot__action__Excavation_SendGoal_Response__Sequence *
lunabot__action__Excavation_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Excavation messages.
/**
 * It calls
 * lunabot__action__Excavation_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_SendGoal_Response__Sequence__destroy(lunabot__action__Excavation_SendGoal_Response__Sequence * array);

/// Check for action/Excavation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_SendGoal_Response__Sequence__are_equal(const lunabot__action__Excavation_SendGoal_Response__Sequence * lhs, const lunabot__action__Excavation_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/Excavation messages.
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
lunabot__action__Excavation_SendGoal_Response__Sequence__copy(
  const lunabot__action__Excavation_SendGoal_Response__Sequence * input,
  lunabot__action__Excavation_SendGoal_Response__Sequence * output);

/// Initialize action/Excavation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lunabot__action__Excavation_GetResult_Request
 * )) before or use
 * lunabot__action__Excavation_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_GetResult_Request__init(lunabot__action__Excavation_GetResult_Request * msg);

/// Finalize action/Excavation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_GetResult_Request__fini(lunabot__action__Excavation_GetResult_Request * msg);

/// Create action/Excavation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lunabot__action__Excavation_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
lunabot__action__Excavation_GetResult_Request *
lunabot__action__Excavation_GetResult_Request__create();

/// Destroy action/Excavation message.
/**
 * It calls
 * lunabot__action__Excavation_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_GetResult_Request__destroy(lunabot__action__Excavation_GetResult_Request * msg);

/// Check for action/Excavation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_GetResult_Request__are_equal(const lunabot__action__Excavation_GetResult_Request * lhs, const lunabot__action__Excavation_GetResult_Request * rhs);

/// Copy a action/Excavation message.
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
lunabot__action__Excavation_GetResult_Request__copy(
  const lunabot__action__Excavation_GetResult_Request * input,
  lunabot__action__Excavation_GetResult_Request * output);

/// Initialize array of action/Excavation messages.
/**
 * It allocates the memory for the number of elements and calls
 * lunabot__action__Excavation_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_GetResult_Request__Sequence__init(lunabot__action__Excavation_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Excavation messages.
/**
 * It calls
 * lunabot__action__Excavation_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_GetResult_Request__Sequence__fini(lunabot__action__Excavation_GetResult_Request__Sequence * array);

/// Create array of action/Excavation messages.
/**
 * It allocates the memory for the array and calls
 * lunabot__action__Excavation_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
lunabot__action__Excavation_GetResult_Request__Sequence *
lunabot__action__Excavation_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Excavation messages.
/**
 * It calls
 * lunabot__action__Excavation_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_GetResult_Request__Sequence__destroy(lunabot__action__Excavation_GetResult_Request__Sequence * array);

/// Check for action/Excavation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_GetResult_Request__Sequence__are_equal(const lunabot__action__Excavation_GetResult_Request__Sequence * lhs, const lunabot__action__Excavation_GetResult_Request__Sequence * rhs);

/// Copy an array of action/Excavation messages.
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
lunabot__action__Excavation_GetResult_Request__Sequence__copy(
  const lunabot__action__Excavation_GetResult_Request__Sequence * input,
  lunabot__action__Excavation_GetResult_Request__Sequence * output);

/// Initialize action/Excavation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lunabot__action__Excavation_GetResult_Response
 * )) before or use
 * lunabot__action__Excavation_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_GetResult_Response__init(lunabot__action__Excavation_GetResult_Response * msg);

/// Finalize action/Excavation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_GetResult_Response__fini(lunabot__action__Excavation_GetResult_Response * msg);

/// Create action/Excavation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lunabot__action__Excavation_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
lunabot__action__Excavation_GetResult_Response *
lunabot__action__Excavation_GetResult_Response__create();

/// Destroy action/Excavation message.
/**
 * It calls
 * lunabot__action__Excavation_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_GetResult_Response__destroy(lunabot__action__Excavation_GetResult_Response * msg);

/// Check for action/Excavation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_GetResult_Response__are_equal(const lunabot__action__Excavation_GetResult_Response * lhs, const lunabot__action__Excavation_GetResult_Response * rhs);

/// Copy a action/Excavation message.
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
lunabot__action__Excavation_GetResult_Response__copy(
  const lunabot__action__Excavation_GetResult_Response * input,
  lunabot__action__Excavation_GetResult_Response * output);

/// Initialize array of action/Excavation messages.
/**
 * It allocates the memory for the number of elements and calls
 * lunabot__action__Excavation_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_GetResult_Response__Sequence__init(lunabot__action__Excavation_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Excavation messages.
/**
 * It calls
 * lunabot__action__Excavation_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_GetResult_Response__Sequence__fini(lunabot__action__Excavation_GetResult_Response__Sequence * array);

/// Create array of action/Excavation messages.
/**
 * It allocates the memory for the array and calls
 * lunabot__action__Excavation_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
lunabot__action__Excavation_GetResult_Response__Sequence *
lunabot__action__Excavation_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Excavation messages.
/**
 * It calls
 * lunabot__action__Excavation_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_GetResult_Response__Sequence__destroy(lunabot__action__Excavation_GetResult_Response__Sequence * array);

/// Check for action/Excavation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_GetResult_Response__Sequence__are_equal(const lunabot__action__Excavation_GetResult_Response__Sequence * lhs, const lunabot__action__Excavation_GetResult_Response__Sequence * rhs);

/// Copy an array of action/Excavation messages.
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
lunabot__action__Excavation_GetResult_Response__Sequence__copy(
  const lunabot__action__Excavation_GetResult_Response__Sequence * input,
  lunabot__action__Excavation_GetResult_Response__Sequence * output);

/// Initialize action/Excavation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lunabot__action__Excavation_FeedbackMessage
 * )) before or use
 * lunabot__action__Excavation_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_FeedbackMessage__init(lunabot__action__Excavation_FeedbackMessage * msg);

/// Finalize action/Excavation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_FeedbackMessage__fini(lunabot__action__Excavation_FeedbackMessage * msg);

/// Create action/Excavation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lunabot__action__Excavation_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
lunabot__action__Excavation_FeedbackMessage *
lunabot__action__Excavation_FeedbackMessage__create();

/// Destroy action/Excavation message.
/**
 * It calls
 * lunabot__action__Excavation_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_FeedbackMessage__destroy(lunabot__action__Excavation_FeedbackMessage * msg);

/// Check for action/Excavation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_FeedbackMessage__are_equal(const lunabot__action__Excavation_FeedbackMessage * lhs, const lunabot__action__Excavation_FeedbackMessage * rhs);

/// Copy a action/Excavation message.
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
lunabot__action__Excavation_FeedbackMessage__copy(
  const lunabot__action__Excavation_FeedbackMessage * input,
  lunabot__action__Excavation_FeedbackMessage * output);

/// Initialize array of action/Excavation messages.
/**
 * It allocates the memory for the number of elements and calls
 * lunabot__action__Excavation_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_FeedbackMessage__Sequence__init(lunabot__action__Excavation_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Excavation messages.
/**
 * It calls
 * lunabot__action__Excavation_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_FeedbackMessage__Sequence__fini(lunabot__action__Excavation_FeedbackMessage__Sequence * array);

/// Create array of action/Excavation messages.
/**
 * It allocates the memory for the array and calls
 * lunabot__action__Excavation_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
lunabot__action__Excavation_FeedbackMessage__Sequence *
lunabot__action__Excavation_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Excavation messages.
/**
 * It calls
 * lunabot__action__Excavation_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
void
lunabot__action__Excavation_FeedbackMessage__Sequence__destroy(lunabot__action__Excavation_FeedbackMessage__Sequence * array);

/// Check for action/Excavation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lunabot
bool
lunabot__action__Excavation_FeedbackMessage__Sequence__are_equal(const lunabot__action__Excavation_FeedbackMessage__Sequence * lhs, const lunabot__action__Excavation_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/Excavation messages.
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
lunabot__action__Excavation_FeedbackMessage__Sequence__copy(
  const lunabot__action__Excavation_FeedbackMessage__Sequence * input,
  lunabot__action__Excavation_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LUNABOT__ACTION__DETAIL__EXCAVATION__FUNCTIONS_H_
