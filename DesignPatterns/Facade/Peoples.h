#pragma once
#include "../Proxy/People.h"
#include <unordered_map>

class Peoples
{
private:
        Peoples()
        {
                m_peoples.insert(std::make_pair("张三", new People));
                m_peoples.insert(std::make_pair("李四", new People));
                m_peoples.insert(std::make_pair("王五", new People));
                auto zhangsan = m_peoples.at("张三");
                zhangsan->SetMoney(8000);
                zhangsan->SetName("张三");

                auto lisi = m_peoples.at("李四");
                lisi->SetMoney(20000);
                lisi->SetName("李四");

                auto wangwu = m_peoples.at("王五");
                wangwu->SetMoney(20000);
                wangwu->SetName("王五");
                wangwu->SetVip(true);
        }
        ~Peoples()
        {
                for (auto iter : m_peoples)
                {
                        delete iter.second;
                }
        }
        Peoples(const Peoples&) = delete;
        Peoples(Peoples&&) = delete;
        Peoples& operator=(const Peoples&) = delete;
        Peoples& operator=(Peoples&&) = delete;
private:
        unordered_map<std::string, People*> m_peoples;
public:
        People* GetPeople(const string& name) { return m_peoples.at(name); }
public:
        static Peoples* GetInstance()
        {
                static Peoples facade;
                return &facade;
        }
};