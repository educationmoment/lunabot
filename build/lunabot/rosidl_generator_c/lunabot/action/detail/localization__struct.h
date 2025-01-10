// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lunabot:action/Localization.idl
// generated code does not contain a copyright notice

#ifndef LUNABOT__ACTION__DETAIL__LOCALIZATION__STRUCT_H_
#define LUNABOT__ACTION__DETAIL__LOCALIZATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Localization in the package lunabot.
typedef struct lunabot__action__Localization_Goal
{
  uint8_t structure_needs_at_least_one_member;
} lunabot__action__Localization_Goal;

// Struct for a sequence of lunabot__action__Localization_Goal.
typedef struct lunabot__action__Localization_Goal__Sequence
{
  lunabot__action__Localization_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lunabot__action__Localization_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Localization in the package lunabot.
typedef struct lunabot__action__Localization_Result
{
  double x;
  double y;
  bool success;
} lunabot__action__Localization_Result;

// Struct for a sequence of lunabot__action__Localization_Result.
typedef struct lunabot__action__Localization_Result__Sequence
{
  lunabot__action__Localization_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lunabot__action__Localization_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Localization in the package lunabot.
typedef struct lunabot__action__Localization_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} lunabot__action__Localization_Feedback;

// Struct for a sequence of lunabot__action__Localization_Feedback.
typedef struct lunabot__action__Localization_Feedback__Sequence
{
  lunabot__action__Localization_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lunabot__action__Localization_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "lunabot/action/detail/localization__struct.h"

/// Struct defined in action/Localization in the package lunabot.
typedef struct lunabot__action__Localization_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  lunabot__action__Localization_Goal goal;
} lunabot__action__Localization_SendGoal_Request;

// Struct for a sequence of lunabot__action__Localization_SendGoal_Request.
typedef struct lunabot__action__Localization_SendGoal_Request__Sequence
{
  lunabot__action__Localization_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lunabot__action__Localization_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Localization in the package lunabot.
typedef struct lunabot__action__Localization_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} lunabot__action__Localization_SendGoal_Response;

// Struct for a sequence of lunabot__action__Localization_SendGoal_Response.
typedef struct lunabot__action__Localization_SendGoal_Response__Sequence
{
  lunabot__action__Localization_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lunabot__action__Localization_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Localization in the package lunabot.
typedef struct lunabot__action__Localization_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} lunabot__action__Localization_GetResult_Request;

// Struct for a sequence of lunabot__action__Localization_GetResult_Request.
typedef struct lunabot__action__Localization_GetResult_Request__Sequence
{
  lunabot__action__Localization_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lunabot__action__Localization_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "lunabot/action/detail/localization__struct.h"

/// Struct defined in action/Localization in the package lunabot.
typedef struct lunabot__action__Localization_GetResult_Response
{
  int8_t status;
  lunabot__action__Localization_Result result;
} lunabot__action__Localization_GetResult_Response;

// Struct for a sequence of lunabot__action__Localization_GetResult_Response.
typedef struct lunabot__action__Localization_GetResult_Response__Sequence
{
  lunabot__action__Localization_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lunabot__action__Localization_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "lunabot/action/detail/localization__struct.h"

/// Struct defined in action/Localization in the package lunabot.
typedef struct lunabot__action__Localization_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  lunabot__action__Localization_Feedback feedback;
} lunabot__action__Localization_FeedbackMessage;

// Struct for a sequence of lunabot__action__Localization_FeedbackMessage.
typedef struct lunabot__action__Localization_FeedbackMessage__Sequence
{
  lunabot__action__Localization_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lunabot__action__Localization_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LUNABOT__ACTION__DETAIL__LOCALIZATION__STRUCT_H_
