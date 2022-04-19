#pragma once
#include <vector>
#include <string>
#include <iostream>
using namespace std;

struct UserInfo
{
        string userName;
        string passWord;
        string name;
};

class UserModel
{
public:
        UserModel() = default;
private:
        vector<UserInfo> m_userInfo;
public:
        void addUserInfo(const UserInfo& info)
        {
                m_userInfo.push_back(info);
        }
        UserInfo& at(int idx)
        {
                return m_userInfo[idx];
        }
        int size()
        {
                return (int)m_userInfo.size();
        }
};