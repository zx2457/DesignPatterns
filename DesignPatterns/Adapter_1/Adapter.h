#pragma once
#include "Adaptee.h"
#include "Target.h"

class Adapter : public Adaptee, public Target
{
public:
        Adapter(const string& str) : Target(str){}
        virtual void printAdd()
        {
                ShowWithAdd();
        }
        virtual void printMinus()
        {
                ShowWithMinus();
        }
};