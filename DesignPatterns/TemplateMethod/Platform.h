#pragma once
#include "ECommercePlatform.h"

class MouBao : public ECommercePlatform
{
public:
        MouBao() = default;
        virtual ~MouBao() = default;
protected:
        virtual void ShowShop(ElectricalShop* shop)
        {
                cout << MergeGoodsInfo(shop) << endl;
        }
        virtual double GetPlatformForTheAnnualFee()
        {
                return 45000;
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
        virtual void ShowShop(ElectricalShop* shop)
        {
                cout << MergeGoodsInfo(shop) << endl;
        }
        virtual double GetPlatformForTheAnnualFee()
        {
                return 60000;
        }
        virtual string GetECName()
        {
                return "ĳ��";
        }
};