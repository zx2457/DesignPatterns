#pragma once
#include "../Decorator/Mainframe.h"

class People
{
public:
        People() {}
        ~People() { delete m_mianFrame; }
public:
        void SetMoney(double money) { m_money = money; }
        void SetVip(bool vip) { m_isVip = vip; }
        void SetName(const string& n) { m_name = n; }
        double GetMoney() const { return m_money; }
        bool isVip() const { return m_isVip; }
        string GetName() const { return m_name; }
        bool isHaveMainframe() const { return m_mianFrame; }
        void SetMainframe(Mainframe* mf) { m_mianFrame = mf; }
private:
        double m_money = 0;
        bool m_isVip = false;
        string m_name;
        Mainframe* m_mianFrame = nullptr;
};