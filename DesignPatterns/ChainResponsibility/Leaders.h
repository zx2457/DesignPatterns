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
                        if (user == "����")
                        {
                                ret.append(string("����ͬ����") + ret + "�ı�������ȥ�Ҳ���ɡ�");
                        }
                        else
                        {
                                ret.append(string("���ܲ�ͬ��") + ret + "�ı�������");
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
                        if (user == "����")
                        {
                                ret.append(string("����ͬ����") + ret + "�ı�������ȥ�Ҳ���ɡ�");
                        }
                        else
                        {
                                ret.append(string("����ͬ��") + ret + "�ı�������");
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
                        if (user == "����")
                        {
                                ret.append(string("�ܾ���ͬ����") + ret + "�ı�������ȥ�Ҳ���ɡ�");
                        }
                        else
                        {
                                ret.append(string("�ܾ���ͬ��") + ret + "�ı�������");
                        }
                }
                else if (GetLeader())
                {
                        ret = GetLeader()->ExamineandApprove(user, fee);
                }
                return ret;
        }
};