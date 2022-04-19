#pragma once
#include "Person.h"

class Mediator
{
public:
        Mediator() {}
        virtual ~Mediator() {}
public:
        virtual void SendMsgToStore(Person* store) = 0;
        virtual void SendMsgToCustomer(Person* people) = 0;
        virtual void SendMsg(string msg, Person* receiver) = 0;
};