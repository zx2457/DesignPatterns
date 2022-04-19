#pragma once
#include <string>
#include <iostream>
#include <list>
#include <map>
using namespace std;

using StringList = list<string>;

class Context
{
private:
        StringList m_lstStatements;
public:
        Context(const string& str) : m_lstStatements(split(str))
        {
                
        }
        ~Context() {}
public:
        string NextStatement()
        {
                auto str = m_lstStatements.front();
                m_lstStatements.pop_front();
                return str;
        }
        bool HasNext()
        {
                return !m_lstStatements.empty();
        }
private:
        StringList split(const string& txt)
        {
                char* str = const_cast<char*>(txt.c_str());
                string tmp;
                StringList tmpLst;
                while (*str != '\0')
                {
                        if( *str != '\n')
                        {
                                tmp.push_back(*str);
                        }
                        else
                        {
                                tmpLst.push_back(tmp);
                                tmp.clear();
                        }
                        str++;
                }
                tmpLst.push_back(tmp);
                return tmpLst;
        }
};