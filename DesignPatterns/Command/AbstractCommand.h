#pragma once
#include "Receiver.h"

class AbstractCommand
{
public:
        AbstractCommand() = default;
        virtual ~AbstractCommand() = default;
public:
        virtual void AddString(const string& str) = 0;
        virtual string Undo() = 0;
};