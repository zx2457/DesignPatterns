#pragma once
#include "Context.h"

class MessageModerationState
{
public:
        MessageModerationState() {}
        virtual ~MessageModerationState() {}
protected:
        function<void(string)> m_callback = nullptr;
public:
        virtual void CheckFinshed(Context* c) = 0;
        virtual string ReviewProgress() = 0;
};