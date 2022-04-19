#pragma once
#include <string>
#include <iostream>
using namespace std;

class Leadership
{
public:
        Leadership() = default;
        virtual ~Leadership()
        {
                delete m_leader;
        }
private:
        Leadership* m_leader = nullptr;
public:
        Leadership* GetLeader()
        {
                return m_leader;
        }
        void SetLeader(Leadership* leader)
        {
                m_leader = leader;
        }
        virtual string ExamineandApprove(string user, double fee) = 0;
};