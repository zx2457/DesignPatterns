#pragma once
#include "Model.h"

class OutView
{
public:
        OutView() = default;
public:
        void PrintUserInfo(const UserInfo& info)
        {
                cout << "�˺ţ�" << info.userName << "   ���룺" << info.passWord << "   ���֣�" << info.name << endl;
        }
};