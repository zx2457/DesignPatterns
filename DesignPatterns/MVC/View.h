#pragma once
#include "Model.h"

class OutView
{
public:
        OutView() = default;
public:
        void PrintUserInfo(const UserInfo& info)
        {
                cout << "ÕËºÅ£º" << info.userName << "   ÃÜÂë£º" << info.passWord << "   Ãû×Ö£º" << info.name << endl;
        }
};