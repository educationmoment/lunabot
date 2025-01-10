// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lunabot:action/Localization.idl
// generated code does not contain a copyright notice

#ifndef LUNABOT__ACTION__DETAIL__LOCALIZATION__BUILDER_HPP_
#define LUNABOT__ACTION__DETAIL__LOCALIZATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lunabot/action/detail/localization__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lunabot
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::lunabot::action::Localization_Goal>()
{
  return ::lunabot::action::Localization_Goal(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace lunabot


namespace lunabot
{

namespace action
{

namespace builder
{

class Init_Localization_Result_success
{
public:
  explicit Init_Localization_Result_success(::lunabot::action::Localization_Result & msg)
  : msg_(msg)
  {}
  ::lunabot::action::Localization_Result success(::lunabot::action::Localization_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lunabot::action::Localization_Result msg_;
};

class Init_Localization_Result_y
{
public:
  explicit Init_Localization_Result_y(::lunabot::action::Localization_Result & msg)
  : msg_(msg)
  {}
  Init_Localization_Result_success y(::lunabot::action::Localization_Result::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Localization_Result_success(msg_);
  }

private:
  ::lunabot::action::Localization_Result msg_;
};

class Init_Localization_Result_x
{
public:
  Init_Localization_Result_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Localization_Result_y x(::lunabot::action::Localization_Result::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Localization_Result_y(msg_);
  }

private:
  ::lunabot::action::Localization_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::lunabot::action::Localization_Result>()
{
  return lunabot::action::builder::Init_Localization_Result_x();
}

}  // namespace lunabot


namespace lunabot
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::lunabot::action::Localization_Feedback>()
{
  return ::lunabot::action::Localization_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace lunabot


namespace lunabot
{

namespace action
{

namespace builder
{

class Init_Localization_SendGoal_Request_goal
{
public:
  explicit Init_Localization_SendGoal_Request_goal(::lunabot::action::Localization_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::lunabot::action::Localization_SendGoal_Request goal(::lunabot::action::Localization_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lunabot::action::Localization_SendGoal_Request msg_;
};

class Init_Localization_SendGoal_Request_goal_id
{
public:
  Init_Localization_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Localization_SendGoal_Request_goal goal_id(::lunabot::action::Localization_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Localization_SendGoal_Request_goal(msg_);
  }

private:
  ::lunabot::action::Localization_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::lunabot::action::Localization_SendGoal_Request>()
{
  return lunabot::action::builder::Init_Localization_SendGoal_Request_goal_id();
}

}  // namespace lunabot


namespace lunabot
{

namespace action
{

namespace builder
{

class Init_Localization_SendGoal_Response_stamp
{
public:
  explicit Init_Localization_SendGoal_Response_stamp(::lunabot::action::Localization_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::lunabot::action::Localization_SendGoal_Response stamp(::lunabot::action::Localization_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lunabot::action::Localization_SendGoal_Response msg_;
};

class Init_Localization_SendGoal_Response_accepted
{
public:
  Init_Localization_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Localization_SendGoal_Response_stamp accepted(::lunabot::action::Localization_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Localization_SendGoal_Response_stamp(msg_);
  }

private:
  ::lunabot::action::Localization_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::lunabot::action::Localization_SendGoal_Response>()
{
  return lunabot::action::builder::Init_Localization_SendGoal_Response_accepted();
}

}  // namespace lunabot


namespace lunabot
{

namespace action
{

namespace builder
{

class Init_Localization_GetResult_Request_goal_id
{
public:
  Init_Localization_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lunabot::action::Localization_GetResult_Request goal_id(::lunabot::action::Localization_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lunabot::action::Localization_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::lunabot::action::Localization_GetResult_Request>()
{
  return lunabot::action::builder::Init_Localization_GetResult_Request_goal_id();
}

}  // namespace lunabot


namespace lunabot
{

namespace action
{

namespace builder
{

class Init_Localization_GetResult_Response_result
{
public:
  explicit Init_Localization_GetResult_Response_result(::lunabot::action::Localization_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::lunabot::action::Localization_GetResult_Response result(::lunabot::action::Localization_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lunabot::action::Localization_GetResult_Response msg_;
};

class Init_Localization_GetResult_Response_status
{
public:
  Init_Localization_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Localization_GetResult_Response_result status(::lunabot::action::Localization_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Localization_GetResult_Response_result(msg_);
  }

private:
  ::lunabot::action::Localization_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::lunabot::action::Localization_GetResult_Response>()
{
  return lunabot::action::builder::Init_Localization_GetResult_Response_status();
}

}  // namespace lunabot


namespace lunabot
{

namespace action
{

namespace builder
{

class Init_Localization_FeedbackMessage_feedback
{
public:
  explicit Init_Localization_FeedbackMessage_feedback(::lunabot::action::Localization_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::lunabot::action::Localization_FeedbackMessage feedback(::lunabot::action::Localization_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lunabot::action::Localization_FeedbackMessage msg_;
};

class Init_Localization_FeedbackMessage_goal_id
{
public:
  Init_Localization_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Localization_FeedbackMessage_feedback goal_id(::lunabot::action::Localization_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Localization_FeedbackMessage_feedback(msg_);
  }

private:
  ::lunabot::action::Localization_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::lunabot::action::Localization_FeedbackMessage>()
{
  return lunabot::action::builder::Init_Localization_FeedbackMessage_goal_id();
}

}  // namespace lunabot

#endif  // LUNABOT__ACTION__DETAIL__LOCALIZATION__BUILDER_HPP_
