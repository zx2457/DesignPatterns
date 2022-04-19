#pragma once
#include <string>
#include <iostream>
using namespace std;

class Mainframe
{
public:
        Mainframe() {}
        virtual ~Mainframe() {}
        virtual string GetName() { return m_name; }
        virtual double GetPrice() = 0;
protected:
        string m_name;
};