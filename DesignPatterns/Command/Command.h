#pragma once
#include "AbstractCommand.h"

class Command : public AbstractCommand
{
public:
        Command(Receiver* receiver) : m_receiver(receiver) {}
        virtual ~Command() = default;
private:
        Receiver* m_receiver;
public:
        virtual void AddString(const string& str)
        {
                m_receiver->AddString(str);
        }
        virtual string Undo()
        {
                return m_receiver->Undo();
        }
};