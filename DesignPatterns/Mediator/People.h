#pragma once
#include "Person.h"

class Store : public Person
{
public:
        Store();
        ~Store();
private:
        Mediator* m_mediator = nullptr;
public:
        virtual void SetMediator(Mediator* mediator);
        virtual void SendMessage(std::string msg);
        virtual void GetMessage(std::string msg);
};

class Customer : public Person
{
public:
        Customer();
        ~Customer();
private:
        Mediator* m_mediator = nullptr;
public:
        virtual void SetMediator(Mediator* mediator);
        virtual void SendMessage(std::string msg);
        virtual void GetMessage(std::string msg);
};