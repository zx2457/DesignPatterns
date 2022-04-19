#pragma once
#include "ECommercePlatform.h"

class MouBao : public ECommercePlatform
{
public:
        MouBao() = default;
        virtual ~MouBao() = default;
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
        virtual void ShowShop(ElectricalShop* shop)
        {
                cout << MergeGoodsInfo(shop) << endl;
        }
        virtual double GetPlatformForTheAnnualFee()
        {
                return 45000;
        }
        virtual string MergeGoodsInfo(ElectricalShop* shop)
        {
                string str(shop->GetShopName());
                str += "��";
                str += shop->GetGoodsName();
                str += "��Ʒ��";
                str += GetECName();
                str += "�ϼܳɹ����ۼ�Ϊ��";
                str += to_string(shop->GetGoodsPrice());
                str += "����Ʒ���ܣ�";
                str += shop->GetGoodsIntroduction();
                return str;
        }
        virtual string GetECName()
        {
                return "ĳ��";
        }
};

class MouDong : public ECommercePlatform
{
public:
        MouDong() = default;
        virtual ~MouDong() = default;
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
        virtual void ShowShop(ElectricalShop* shop)
        {
                cout << MergeGoodsInfo(shop) << endl;
        }
        virtual double GetPlatformForTheAnnualFee()
        {
                return 60000;
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
        virtual string GetECName()
        {
                return "ĳ��";
        }
};