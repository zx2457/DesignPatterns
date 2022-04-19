#pragma once
#include "Memento.h"

class Originator
{
private:
        string m_str;
public:
        Originator(){}
public:
        Memento Save()
        {
                Memento memento(m_str);
                return memento;
        }
        void Load(const Memento& memento)
        {
                m_str = memento.m_str;
        }
        void PrintCurrentStr()
        {
                cout << m_str << endl;
        }
};