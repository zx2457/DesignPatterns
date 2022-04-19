#pragma once
#include "Context.h"

class AbstractExpression
{
public:
        AbstractExpression() = default;
        virtual ~AbstractExpression() = default;
public:
        virtual void interpret(Context* text) = 0;
        virtual int execute() = 0;
};