#pragma once
#include "People.h"

class Proxy
{
public:
        Proxy() {}
        ~Proxy() {}
public:
        void BuyMainFrame(People* people, Mainframe* mf)
        {
                if (people->GetMoney() < mf->GetPrice())
                {
                        cout << people->GetName() << "不能买主机，钱不够，继续赚钱吧" << endl;
                        return;
                }
                double totalPrice = mf->GetPrice();
                string isVip("不是Vip");
                if (people->isVip())
                {
                        totalPrice *= 0.88;
                        isVip = "是Vip";
                }
                people->SetMoney(people->GetMoney() - totalPrice);
                cout << people->GetName() << isVip << "，购买了(" << mf->GetName() << ")后还剩" << people->GetMoney() << "元钱" << endl;
                people->SetMainframe(mf);
        }
};