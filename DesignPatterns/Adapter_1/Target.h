#pragma once
#include <iostream>
#include <string>
using namespace std;

class Target
{
public:
        Target(const string& str) : m_str(str){}
        virtual ~Target() {}
        void ShowWithAdd()
        {
                cout << "+" << m_str << "+" << endl;
        }
        void ShowWithMinus()
        {
                cout << "-" << m_str << "-" << endl;
        }

private:
        string m_str;
};