#pragma once
#include <string>
#include <iostream>
using namespace std;

class Mediator;

class Person
{
public:
        Person() {}
        virtual ~Person() {}
public:
        virtual void SetMediator(Mediator* mediator) = 0;
        virtual void SendMessage(std::string msg) = 0;
        virtual void GetMessage(std::string msg) = 0;
};