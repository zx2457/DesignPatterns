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
                        str += "交完";
                        str += GetECName();
                        str += "平台年费后还剩：";
                        str += to_string(residue);
                }
                else
                {
                        str += "资产不足以交";
                        str += GetECName();
                        str += "平台年费，上架失败";
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
                str += "的";
                str += shop->GetGoodsName();
                str += "产品在";
                str += GetECName();
                str += "上架成功，售价为：";
                str += to_string(shop->GetGoodsPrice());
                str += "，产品介绍：";
                str += shop->GetGoodsIntroduction();
                return str;
        }
        virtual string GetECName()
        {
                return "某宝";
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
                        str += "交完";
                        str += GetECName();
                        str += "平台年费后还剩：";
                        str += to_string(residue);
                }
                else
                {
                        str += "资产不足以交";
                        str += GetECName();
                        str += "平台年费，上架失败";
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
                str += "的";
                str += shop->GetGoodsName();
                str += "产品在";
                str += GetECName();
                str += "平台上架成功，售价为：";
                str += to_string(shop->GetGoodsPrice());
                str += "，产品介绍：";
                str += shop->GetGoodsIntroduction();
                return str;
        }
        virtual string GetECName()
        {
                return "某东";
        }
};