#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <functional>
using namespace std;

class MessageModerationState;

class Context
{
private:
        MessageModerationState* m_state = nullptr;
public:
        Context() {}
        ~Context();
public:
        void SetState(MessageModerationState* s);
        string GetCurrentProgress();
        void CheckFinished();
};