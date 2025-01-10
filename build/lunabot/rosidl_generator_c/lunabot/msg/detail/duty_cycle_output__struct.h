// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lunabot:msg/DutyCycleOutput.idl
// generated code does not contain a copyright notice

#ifndef LUNABOT__MSG__DETAIL__DUTY_CYCLE_OUTPUT__STRUCT_H_
#define LUNABOT__MSG__DETAIL__DUTY_CYCLE_OUTPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DutyCycleOutput in the package lunabot.
typedef struct lunabot__msg__DutyCycleOutput
{
  double left_drive_output;
  double right_drive_output;
  double left_lift_output;
  double right_lift_output;
  double tilt_output;
  double vibrator_output;
} lunabot__msg__DutyCycleOutput;

// Struct for a sequence of lunabot__msg__DutyCycleOutput.
typedef struct lunabot__msg__DutyCycleOutput__Sequence
{
  lunabot__msg__DutyCycleOutput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lunabot__msg__DutyCycleOutput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LUNABOT__MSG__DETAIL__DUTY_CYCLE_OUTPUT__STRUCT_H_
