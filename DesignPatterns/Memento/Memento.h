#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Memento
{
public:
        string m_str;
public:
        Memento(string str) : m_str(str) {}
};