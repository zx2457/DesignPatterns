#pragma once
#include "Leadership.h"

class Director : public Leadership
{
public:
        Director(Leadership* leader = nullptr)
        {
                SetLeader(leader);
        }
        virtual string ExamineandApprove(string user, double fee)
        {
                string ret;
                if (fee < 700)
                {
                        if (user == "张三")
                        {
                                ret.append(string("主管同意了") + ret + "的报销请求，去找财务吧。");
                        }
                        else
                        {
                                ret.append(string("主管不同意") + ret + "的报销请求。");
                        }
                }
                else if (GetLeader())
                {
                        ret = GetLeader()->ExamineandApprove(user, fee);
                }
                return ret;
        }
};

class Manager : public Leadership
{
public:
        Manager(Leadership* leader = nullptr)
        {
                SetLeader(leader);
        }
        virtual string ExamineandApprove(string user, double fee)
        {
                string ret;
                if (fee < 1000)
                {
                        if (user == "张三")
                        {
                                ret.append(string("经理同意了") + ret + "的报销请求，去找财务吧。");
                        }
                        else
                        {
                                ret.append(string("经理不同意") + ret + "的报销请求。");
                        }
                }
                else if(GetLeader())
                {
                        ret = GetLeader()->ExamineandApprove(user, fee);
                }
                return ret;
        }
};

class GeneralManager : public Leadership
{
public:
        GeneralManager(Leadership* leader = nullptr)
        {
                SetLeader(leader);
        }
        virtual string ExamineandApprove(string user, double fee)
        {
                string ret;
                if (fee >= 1500)
                {
                        if (user == "张三")
                        {
                                ret.append(string("总经理同意了") + ret + "的报销请求，去找财务吧。");
                        }
                        else
                        {
                                ret.append(string("总经理不同意") + ret + "的报销请求。");
                        }
                }
                else if (GetLeader())
                {
                        ret = GetLeader()->ExamineandApprove(user, fee);
                }
                return ret;
        }
};