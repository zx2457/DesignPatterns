#pragma once
#include "Goods.h"

class ECommercePlatform
{
public:
        ECommercePlatform() = default;
        virtual ~ECommercePlatform() = default;
public:
        virtual bool PutawayGoods(ElectricalShop* shop)
        {
                if (!CheckAnnualFee(shop)) return false;

                ShowShop(shop);

                return true;
        }
protected:
        virtual bool CheckAnnualFee(ElectricalShop* shop)
        {
                auto af = shop->GetAssets();
                auto residue = af - GetPlatformForTheAnnualFee();
                bool isPass = residue > 0;
                string str(shop->GetShopName());
                if (isPass)
                {
                        str += "����";
                        str += GetECName();
                        str += "ƽ̨��Ѻ�ʣ��";
                        str += to_string(residue);
                }
                else
                {
                        str += "�ʲ������Խ�";
                        str += GetECName();
                        str += "ƽ̨��ѣ��ϼ�ʧ��";
                }
                cout << str << endl;
                return isPass;
        }
        virtual string MergeGoodsInfo(ElectricalShop* shop)
        {
                string str(shop->GetShopName());
                str += "��";
                str += shop->GetGoodsName();
                str += "��Ʒ��";
                str += GetECName();
                str += "ƽ̨�ϼܳɹ����ۼ�Ϊ��";
                str += to_string(shop->GetGoodsPrice());
                str += "����Ʒ���ܣ�";
                str += shop->GetGoodsIntroduction();
                return str;
        }
        virtual void ShowShop(ElectricalShop* shop) = 0;
        virtual double GetPlatformForTheAnnualFee() = 0;
        virtual string GetECName() = 0;
};