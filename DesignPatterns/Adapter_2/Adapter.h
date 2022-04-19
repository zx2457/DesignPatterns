#pragma once
#include "Adaptee.h"
#include "Target.h"

class Adapter : public Adaptee
{
public:
        Adapter(const string& str) : m_target(new Target(str)){}
        ~Adapter() { delete m_target; }
        virtual void printAdd()
        {
                m_target->ShowWithAdd();
        }
        virtual void printMinus()
        {
                m_target->ShowWithMinus();
        }
private:
        Target* m_target = nullptr;
};