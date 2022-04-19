#pragma once
#include <string>
#include <iostream>
#include <memory>
using namespace std;

class Prototype
{
public:
        Prototype(string c) : m_prototype(c) { }
        ~Prototype(){}
public:
        void Show()
        {
                cout << m_prototype << endl;
        }
        shared_ptr<Prototype> clone()
        {
                shared_ptr<Prototype> ptt(new Prototype(m_prototype));
                return ptt;
        }
private:
        string m_prototype;
};