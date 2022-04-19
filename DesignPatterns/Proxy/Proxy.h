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
                        cout << people->GetName() << "������������Ǯ����������׬Ǯ��" << endl;
                        return;
                }
                double totalPrice = mf->GetPrice();
                string isVip("����Vip");
                if (people->isVip())
                {
                        totalPrice *= 0.88;
                        isVip = "��Vip";
                }
                people->SetMoney(people->GetMoney() - totalPrice);
                cout << people->GetName() << isVip << "��������(" << mf->GetName() << ")��ʣ" << people->GetMoney() << "ԪǮ" << endl;
                people->SetMainframe(mf);
        }
};