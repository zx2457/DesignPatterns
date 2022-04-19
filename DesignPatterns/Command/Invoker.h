#pragma once
#include "Command.h"

class Invoker
{
public:
        Invoker(Command* com) : m_command(com) {}
        ~Invoker() = default;
private:
        Command* m_command;
public:
        void AddString(const string& str)
        {
                m_command->AddString(str);
        }
        string Undo()
        {
                return m_command->Undo();
        }
};