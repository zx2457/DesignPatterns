#pragma once
#include <string>
#include <vector>
using namespace std;

class Receiver
{
public:
        Receiver() = default;
        virtual ~Receiver() = default;
private:
        vector<string> m_lstStr;
public:
        void AddString(const string& str)
        {
                m_lstStr.push_back(str);
        }
        string Undo()
        {
                if(m_lstStr.empty()) return "";
                m_lstStr.pop_back();
                string ret;
                for(auto& str : m_lstStr)
                        ret += str;
                return ret;
        }
};