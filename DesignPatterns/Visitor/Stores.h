#pragma once
#include "Store.h"

class ComputerStore : public Store
{
public:
        ComputerStore();
public:
        virtual void AcceptAccess(Visitor* v);
};

class XiaoMiStore : public Store
{
public:
        XiaoMiStore();
public:
        virtual void AcceptAccess(Visitor* v);
};