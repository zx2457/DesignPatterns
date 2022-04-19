#pragma once
#include "../Proxy/People.h"
#include <unordered_map>

class Peoples
{
private:
        Peoples()
        {
                m_peoples.insert(std::make_pair("����", new People));
                m_peoples.insert(std::make_pair("����", new People));
                m_peoples.insert(std::make_pair("����", new People));
                auto zhangsan = m_peoples.at("����");
                zhangsan->SetMoney(8000);
                zhangsan->SetName("����");

                auto lisi = m_peoples.at("����");
                lisi->SetMoney(20000);
                lisi->SetName("����");

                auto wangwu = m_peoples.at("����");
                wangwu->SetMoney(20000);
                wangwu->SetName("����");
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