#pragma once
#include "Goods.h"

class ECommercePlatform
{
public:
        ECommercePlatform() = default;
        virtual ~ECommercePlatform() = default;
public:
        virtual bool PutawayGoods(ElectricalShop* shop) = 0;
protected:
        virtual bool CheckAnnualFee(ElectricalShop* shop) = 0;
        virtual void ShowShop(ElectricalShop* shop) = 0;
        virtual double GetPlatformForTheAnnualFee() = 0;
        virtual string GetECName() = 0;
};