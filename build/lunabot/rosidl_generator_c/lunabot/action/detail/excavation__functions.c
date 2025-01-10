// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lunabot:action/Excavation.idl
// generated code does not contain a copyright notice
#include "lunabot/action/detail/excavation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
lunabot__action__Excavation_Goal__init(lunabot__action__Excavation_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
lunabot__action__Excavation_Goal__fini(lunabot__action__Excavation_Goal * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
lunabot__action__Excavation_Goal__are_equal(const lunabot__action__Excavation_Goal * lhs, const lunabot__action__Excavation_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
lunabot__action__Excavation_Goal__copy(
  const lunabot__action__Excavation_Goal * input,
  lunabot__action__Excavation_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

lunabot__action__Excavation_Goal *
lunabot__action__Excavation_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lunabot__action__Excavation_Goal * msg = (lunabot__action__Excavation_Goal *)allocator.allocate(sizeof(lunabot__action__Excavation_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lunabot__action__Excavation_Goal));
  bool success = lunabot__action__Excavation_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lunabot__action__Excavation_Goal__destroy(lunabot__action__Excavation_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lunabot__action__Excavation_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lunabot__action__Excavation_Goal__Sequence__init(lunabot__action__Excavation_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lunabot__action__Excavation_Goal * data = NULL;

  if (size) {
    data = (lunabot__action__Excavation_Goal *)allocator.zero_allocate(size, sizeof(lunabot__action__Excavation_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lunabot__action__Excavation_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lunabot__action__Excavation_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
lunabot__action__Excavation_Goal__Sequence__fini(lunabot__action__Excavation_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lunabot__action__Excavation_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

lunabot__action__Excavation_Goal__Sequence *
lunabot__action__Excavation_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lunabot__action__Excavation_Goal__Sequence * array = (lunabot__action__Excavation_Goal__Sequence *)allocator.allocate(sizeof(lunabot__action__Excavation_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lunabot__action__Excavation_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lunabot__action__Excavation_Goal__Sequence__destroy(lunabot__action__Excavation_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lunabot__action__Excavation_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lunabot__action__Excavation_Goal__Sequence__are_equal(const lunabot__action__Excavation_Goal__Sequence * lhs, const lunabot__action__Excavation_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lunabot__action__Excavation_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lunabot__action__Excavation_Goal__Sequence__copy(
  const lunabot__action__Excavation_Goal__Sequence * input,
  lunabot__action__Excavation_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lunabot__action__Excavation_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lunabot__action__Excavation_Goal * data =
      (lunabot__action__Excavation_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lunabot__action__Excavation_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lunabot__action__Excavation_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lunabot__action__Excavation_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
lunabot__action__Excavation_Result__init(lunabot__action__Excavation_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
lunabot__action__Excavation_Result__fini(lunabot__action__Excavation_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
lunabot__action__Excavation_Result__are_equal(const lunabot__action__Excavation_Result * lhs, const lunabot__action__Excavation_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
lunabot__action__Excavation_Result__copy(
  const lunabot__action__Excavation_Result * input,
  lunabot__action__Excavation_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

lunabot__action__Excavation_Result *
lunabot__action__Excavation_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lunabot__action__Excavation_Result * msg = (lunabot__action__Excavation_Result *)allocator.allocate(sizeof(lunabot__action__Excavation_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lunabot__action__Excavation_Result));
  bool success = lunabot__action__Excavation_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lunabot__action__Excavation_Result__destroy(lunabot__action__Excavation_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lunabot__action__Excavation_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lunabot__action__Excavation_Result__Sequence__init(lunabot__action__Excavation_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lunabot__action__Excavation_Result * data = NULL;

  if (size) {
    data = (lunabot__action__Excavation_Result *)allocator.zero_allocate(size, sizeof(lunabot__action__Excavation_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lunabot__action__Excavation_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lunabot__action__Excavation_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
lunabot__action__Excavation_Result__Sequence__fini(lunabot__action__Excavation_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lunabot__action__Excavation_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

lunabot__action__Excavation_Result__Sequence *
lunabot__action__Excavation_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lunabot__action__Excavation_Result__Sequence * array = (lunabot__action__Excavation_Result__Sequence *)allocator.allocate(sizeof(lunabot__action__Excavation_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lunabot__action__Excavation_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lunabot__action__Excavation_Result__Sequence__destroy(lunabot__action__Excavation_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lunabot__action__Excavation_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lunabot__action__Excavation_Result__Sequence__are_equal(const lunabot__action__Excavation_Result__Sequence * lhs, const lunabot__action__Excavation_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lunabot__action__Excavation_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lunabot__action__Excavation_Result__Sequence__copy(
  const lunabot__action__Excavation_Result__Sequence * input,
  lunabot__action__Excavation_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lunabot__action__Excavation_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lunabot__action__Excavation_Result * data =
      (lunabot__action__Excavation_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lunabot__action__Excavation_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lunabot__action__Excavation_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lunabot__action__Excavation_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
lunabot__action__Excavation_Feedback__init(lunabot__action__Excavation_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
lunabot__action__Excavation_Feedback__fini(lunabot__action__Excavation_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
lunabot__action__Excavation_Feedback__are_equal(const lunabot__action__Excavation_Feedback * lhs, const lunabot__action__Excavation_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
lunabot__action__Excavation_Feedback__copy(
  const lunabot__action__Excavation_Feedback * input,
  lunabot__action__Excavation_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

lunabot__action__Excavation_Feedback *
lunabot__action__Excavation_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lunabot__action__Excavation_Feedback * msg = (lunabot__action__Excavation_Feedback *)allocator.allocate(sizeof(lunabot__action__Excavation_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lunabot__action__Excavation_Feedback));
  bool success = lunabot__action__Excavation_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lunabot__action__Excavation_Feedback__destroy(lunabot__action__Excavation_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lunabot__action__Excavation_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lunabot__action__Excavation_Feedback__Sequence__init(lunabot__action__Excavation_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lunabot__action__Excavation_Feedback * data = NULL;

  if (size) {
    data = (lunabot__action__Excavation_Feedback *)allocator.zero_allocate(size, sizeof(lunabot__action__Excavation_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lunabot__action__Excavation_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lunabot__action__Excavation_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
lunabot__action__Excavation_Feedback__Sequence__fini(lunabot__action__Excavation_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lunabot__action__Excavation_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

lunabot__action__Excavation_Feedback__Sequence *
lunabot__action__Excavation_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lunabot__action__Excavation_Feedback__Sequence * array = (lunabot__action__Excavation_Feedback__Sequence *)allocator.allocate(sizeof(lunabot__action__Excavation_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lunabot__action__Excavation_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lunabot__action__Excavation_Feedback__Sequence__destroy(lunabot__action__Excavation_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lunabot__action__Excavation_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lunabot__action__Excavation_Feedback__Sequence__are_equal(const lunabot__action__Excavation_Feedback__Sequence * lhs, const lunabot__action__Excavation_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lunabot__action__Excavation_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lunabot__action__Excavation_Feedback__Sequence__copy(
  const lunabot__action__Excavation_Feedback__Sequence * input,
  lunabot__action__Excavation_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lunabot__action__Excavation_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lunabot__action__Excavation_Feedback * data =
      (lunabot__action__Excavation_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lunabot__action__Excavation_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lunabot__action__Excavation_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lunabot__action__Excavation_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "lunabot/action/detail/excavation__functions.h"

bool
lunabot__action__Excavation_SendGoal_Request__init(lunabot__action__Excavation_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    lunabot__action__Excavation_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!lunabot__action__Excavation_Goal__init(&msg->goal)) {
    lunabot__action__Excavation_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
lunabot__action__Excavation_SendGoal_Request__fini(lunabot__action__Excavation_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  lunabot__action__Excavation_Goal__fini(&msg->goal);
}

bool
lunabot__action__Excavation_SendGoal_Request__are_equal(const lunabot__action__Excavation_SendGoal_Request * lhs, const lunabot__action__Excavation_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!lunabot__action__Excavation_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
lunabot__action__Excavation_SendGoal_Request__copy(
  const lunabot__action__Excavation_SendGoal_Request * input,
  lunabot__action__Excavation_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!lunabot__action__Excavation_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

lunabot__action__Excavation_SendGoal_Request *
lunabot__action__Excavation_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lunabot__action__Excavation_SendGoal_Request * msg = (lunabot__action__Excavation_SendGoal_Request *)allocator.allocate(sizeof(lunabot__action__Excavation_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lunabot__action__Excavation_SendGoal_Request));
  bool success = lunabot__action__Excavation_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lunabot__action__Excavation_SendGoal_Request__destroy(lunabot__action__Excavation_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lunabot__action__Excavation_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lunabot__action__Excavation_SendGoal_Request__Sequence__init(lunabot__action__Excavation_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lunabot__action__Excavation_SendGoal_Request * data = NULL;

  if (size) {
    data = (lunabot__action__Excavation_SendGoal_Request *)allocator.zero_allocate(size, sizeof(lunabot__action__Excavation_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lunabot__action__Excavation_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lunabot__action__Excavation_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
lunabot__action__Excavation_SendGoal_Request__Sequence__fini(lunabot__action__Excavation_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lunabot__action__Excavation_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

lunabot__action__Excavation_SendGoal_Request__Sequence *
lunabot__action__Excavation_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lunabot__action__Excavation_SendGoal_Request__Sequence * array = (lunabot__action__Excavation_SendGoal_Request__Sequence *)allocator.allocate(sizeof(lunabot__action__Excavation_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lunabot__action__Excavation_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lunabot__action__Excavation_SendGoal_Request__Sequence__destroy(lunabot__action__Excavation_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lunabot__action__Excavation_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lunabot__action__Excavation_SendGoal_Request__Sequence__are_equal(const lunabot__action__Excavation_SendGoal_Request__Sequence * lhs, const lunabot__action__Excavation_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lunabot__action__Excavation_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lunabot__action__Excavation_SendGoal_Request__Sequence__copy(
  const lunabot__action__Excavation_SendGoal_Request__Sequence * input,
  lunabot__action__Excavation_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lunabot__action__Excavation_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lunabot__action__Excavation_SendGoal_Request * data =
      (lunabot__action__Excavation_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lunabot__action__Excavation_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lunabot__action__Excavation_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lunabot__action__Excavation_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
lunabot__action__Excavation_SendGoal_Response__init(lunabot__action__Excavation_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    lunabot__action__Excavation_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
lunabot__action__Excavation_SendGoal_Response__fini(lunabot__action__Excavation_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
lunabot__action__Excavation_SendGoal_Response__are_equal(const lunabot__action__Excavation_SendGoal_Response * lhs, const lunabot__action__Excavation_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
lunabot__action__Excavation_SendGoal_Response__copy(
  const lunabot__action__Excavation_SendGoal_Response * input,
  lunabot__action__Excavation_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

lunabot__action__Excavation_SendGoal_Response *
lunabot__action__Excavation_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lunabot__action__Excavation_SendGoal_Response * msg = (lunabot__action__Excavation_SendGoal_Response *)allocator.allocate(sizeof(lunabot__action__Excavation_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lunabot__action__Excavation_SendGoal_Response));
  bool success = lunabot__action__Excavation_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lunabot__action__Excavation_SendGoal_Response__destroy(lunabot__action__Excavation_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lunabot__action__Excavation_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lunabot__action__Excavation_SendGoal_Response__Sequence__init(lunabot__action__Excavation_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lunabot__action__Excavation_SendGoal_Response * data = NULL;

  if (size) {
    data = (lunabot__action__Excavation_SendGoal_Response *)allocator.zero_allocate(size, sizeof(lunabot__action__Excavation_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lunabot__action__Excavation_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lunabot__action__Excavation_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
lunabot__action__Excavation_SendGoal_Response__Sequence__fini(lunabot__action__Excavation_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lunabot__action__Excavation_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

lunabot__action__Excavation_SendGoal_Response__Sequence *
lunabot__action__Excavation_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lunabot__action__Excavation_SendGoal_Response__Sequence * array = (lunabot__action__Excavation_SendGoal_Response__Sequence *)allocator.allocate(sizeof(lunabot__action__Excavation_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lunabot__action__Excavation_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lunabot__action__Excavation_SendGoal_Response__Sequence__destroy(lunabot__action__Excavation_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lunabot__action__Excavation_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lunabot__action__Excavation_SendGoal_Response__Sequence__are_equal(const lunabot__action__Excavation_SendGoal_Response__Sequence * lhs, const lunabot__action__Excavation_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lunabot__action__Excavation_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lunabot__action__Excavation_SendGoal_Response__Sequence__copy(
  const lunabot__action__Excavation_SendGoal_Response__Sequence * input,
  lunabot__action__Excavation_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lunabot__action__Excavation_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lunabot__action__Excavation_SendGoal_Response * data =
      (lunabot__action__Excavation_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lunabot__action__Excavation_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lunabot__action__Excavation_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lunabot__action__Excavation_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
lunabot__action__Excavation_GetResult_Request__init(lunabot__action__Excavation_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    lunabot__action__Excavation_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
lunabot__action__Excavation_GetResult_Request__fini(lunabot__action__Excavation_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
lunabot__action__Excavation_GetResult_Request__are_equal(const lunabot__action__Excavation_GetResult_Request * lhs, const lunabot__action__Excavation_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
lunabot__action__Excavation_GetResult_Request__copy(
  const lunabot__action__Excavation_GetResult_Request * input,
  lunabot__action__Excavation_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

lunabot__action__Excavation_GetResult_Request *
lunabot__action__Excavation_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lunabot__action__Excavation_GetResult_Request * msg = (lunabot__action__Excavation_GetResult_Request *)allocator.allocate(sizeof(lunabot__action__Excavation_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lunabot__action__Excavation_GetResult_Request));
  bool success = lunabot__action__Excavation_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lunabot__action__Excavation_GetResult_Request__destroy(lunabot__action__Excavation_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lunabot__action__Excavation_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lunabot__action__Excavation_GetResult_Request__Sequence__init(lunabot__action__Excavation_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lunabot__action__Excavation_GetResult_Request * data = NULL;

  if (size) {
    data = (lunabot__action__Excavation_GetResult_Request *)allocator.zero_allocate(size, sizeof(lunabot__action__Excavation_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lunabot__action__Excavation_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lunabot__action__Excavation_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
lunabot__action__Excavation_GetResult_Request__Sequence__fini(lunabot__action__Excavation_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lunabot__action__Excavation_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

lunabot__action__Excavation_GetResult_Request__Sequence *
lunabot__action__Excavation_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lunabot__action__Excavation_GetResult_Request__Sequence * array = (lunabot__action__Excavation_GetResult_Request__Sequence *)allocator.allocate(sizeof(lunabot__action__Excavation_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lunabot__action__Excavation_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lunabot__action__Excavation_GetResult_Request__Sequence__destroy(lunabot__action__Excavation_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lunabot__action__Excavation_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lunabot__action__Excavation_GetResult_Request__Sequence__are_equal(const lunabot__action__Excavation_GetResult_Request__Sequence * lhs, const lunabot__action__Excavation_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lunabot__action__Excavation_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lunabot__action__Excavation_GetResult_Request__Sequence__copy(
  const lunabot__action__Excavation_GetResult_Request__Sequence * input,
  lunabot__action__Excavation_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lunabot__action__Excavation_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lunabot__action__Excavation_GetResult_Request * data =
      (lunabot__action__Excavation_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lunabot__action__Excavation_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lunabot__action__Excavation_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lunabot__action__Excavation_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "lunabot/action/detail/excavation__functions.h"

bool
lunabot__action__Excavation_GetResult_Response__init(lunabot__action__Excavation_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!lunabot__action__Excavation_Result__init(&msg->result)) {
    lunabot__action__Excavation_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
lunabot__action__Excavation_GetResult_Response__fini(lunabot__action__Excavation_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  lunabot__action__Excavation_Result__fini(&msg->result);
}

bool
lunabot__action__Excavation_GetResult_Response__are_equal(const lunabot__action__Excavation_GetResult_Response * lhs, const lunabot__action__Excavation_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!lunabot__action__Excavation_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
lunabot__action__Excavation_GetResult_Response__copy(
  const lunabot__action__Excavation_GetResult_Response * input,
  lunabot__action__Excavation_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!lunabot__action__Excavation_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

lunabot__action__Excavation_GetResult_Response *
lunabot__action__Excavation_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lunabot__action__Excavation_GetResult_Response * msg = (lunabot__action__Excavation_GetResult_Response *)allocator.allocate(sizeof(lunabot__action__Excavation_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lunabot__action__Excavation_GetResult_Response));
  bool success = lunabot__action__Excavation_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lunabot__action__Excavation_GetResult_Response__destroy(lunabot__action__Excavation_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lunabot__action__Excavation_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lunabot__action__Excavation_GetResult_Response__Sequence__init(lunabot__action__Excavation_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lunabot__action__Excavation_GetResult_Response * data = NULL;

  if (size) {
    data = (lunabot__action__Excavation_GetResult_Response *)allocator.zero_allocate(size, sizeof(lunabot__action__Excavation_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lunabot__action__Excavation_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lunabot__action__Excavation_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
lunabot__action__Excavation_GetResult_Response__Sequence__fini(lunabot__action__Excavation_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lunabot__action__Excavation_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

lunabot__action__Excavation_GetResult_Response__Sequence *
lunabot__action__Excavation_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lunabot__action__Excavation_GetResult_Response__Sequence * array = (lunabot__action__Excavation_GetResult_Response__Sequence *)allocator.allocate(sizeof(lunabot__action__Excavation_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lunabot__action__Excavation_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lunabot__action__Excavation_GetResult_Response__Sequence__destroy(lunabot__action__Excavation_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lunabot__action__Excavation_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lunabot__action__Excavation_GetResult_Response__Sequence__are_equal(const lunabot__action__Excavation_GetResult_Response__Sequence * lhs, const lunabot__action__Excavation_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lunabot__action__Excavation_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lunabot__action__Excavation_GetResult_Response__Sequence__copy(
  const lunabot__action__Excavation_GetResult_Response__Sequence * input,
  lunabot__action__Excavation_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lunabot__action__Excavation_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lunabot__action__Excavation_GetResult_Response * data =
      (lunabot__action__Excavation_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lunabot__action__Excavation_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lunabot__action__Excavation_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lunabot__action__Excavation_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "lunabot/action/detail/excavation__functions.h"

bool
lunabot__action__Excavation_FeedbackMessage__init(lunabot__action__Excavation_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    lunabot__action__Excavation_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!lunabot__action__Excavation_Feedback__init(&msg->feedback)) {
    lunabot__action__Excavation_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
lunabot__action__Excavation_FeedbackMessage__fini(lunabot__action__Excavation_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  lunabot__action__Excavation_Feedback__fini(&msg->feedback);
}

bool
lunabot__action__Excavation_FeedbackMessage__are_equal(const lunabot__action__Excavation_FeedbackMessage * lhs, const lunabot__action__Excavation_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!lunabot__action__Excavation_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
lunabot__action__Excavation_FeedbackMessage__copy(
  const lunabot__action__Excavation_FeedbackMessage * input,
  lunabot__action__Excavation_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!lunabot__action__Excavation_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

lunabot__action__Excavation_FeedbackMessage *
lunabot__action__Excavation_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lunabot__action__Excavation_FeedbackMessage * msg = (lunabot__action__Excavation_FeedbackMessage *)allocator.allocate(sizeof(lunabot__action__Excavation_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lunabot__action__Excavation_FeedbackMessage));
  bool success = lunabot__action__Excavation_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lunabot__action__Excavation_FeedbackMessage__destroy(lunabot__action__Excavation_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lunabot__action__Excavation_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lunabot__action__Excavation_FeedbackMessage__Sequence__init(lunabot__action__Excavation_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lunabot__action__Excavation_FeedbackMessage * data = NULL;

  if (size) {
    data = (lunabot__action__Excavation_FeedbackMessage *)allocator.zero_allocate(size, sizeof(lunabot__action__Excavation_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lunabot__action__Excavation_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lunabot__action__Excavation_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
lunabot__action__Excavation_FeedbackMessage__Sequence__fini(lunabot__action__Excavation_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lunabot__action__Excavation_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

lunabot__action__Excavation_FeedbackMessage__Sequence *
lunabot__action__Excavation_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lunabot__action__Excavation_FeedbackMessage__Sequence * array = (lunabot__action__Excavation_FeedbackMessage__Sequence *)allocator.allocate(sizeof(lunabot__action__Excavation_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lunabot__action__Excavation_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lunabot__action__Excavation_FeedbackMessage__Sequence__destroy(lunabot__action__Excavation_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lunabot__action__Excavation_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lunabot__action__Excavation_FeedbackMessage__Sequence__are_equal(const lunabot__action__Excavation_FeedbackMessage__Sequence * lhs, const lunabot__action__Excavation_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lunabot__action__Excavation_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lunabot__action__Excavation_FeedbackMessage__Sequence__copy(
  const lunabot__action__Excavation_FeedbackMessage__Sequence * input,
  lunabot__action__Excavation_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lunabot__action__Excavation_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lunabot__action__Excavation_FeedbackMessage * data =
      (lunabot__action__Excavation_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lunabot__action__Excavation_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lunabot__action__Excavation_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lunabot__action__Excavation_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
