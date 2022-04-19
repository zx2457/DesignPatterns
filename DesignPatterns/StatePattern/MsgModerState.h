#pragma once
#include "MessageModerationState.h"

class SubmitMsg : public MessageModerationState
{
public:
        SubmitMsg(function<void(string)> callback);
public:
        virtual void CheckFinshed(Context* c);
        virtual string ReviewProgress();
};

class ModerationStateMsg : public MessageModerationState
{
public:
        ModerationStateMsg(function<void(string)> callback);
public:
        virtual void CheckFinshed(Context* c);
        virtual string ReviewProgress();
};

class InstructionMsg : public MessageModerationState
{
public:
        InstructionMsg(function<void(string)> callback);
public:
        virtual void CheckFinshed(Context* c);
        virtual string ReviewProgress();
};

class AuditMsgFinished : public MessageModerationState
{
public:
        AuditMsgFinished(function<void(string)> callback);
public:
        virtual void CheckFinshed(Context* c);
        virtual string ReviewProgress();
};