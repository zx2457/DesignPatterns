#pragma once
#include "ElectricalShop.h"

class i7Computer : public ElectricalShop
{
public:
        i7Computer() = default;
        virtual string GetShopName()
        {
                return "军工级电脑旗舰店";
        }
        virtual string GetGoodsName()
        {
                return "i7游戏电脑";
        }
        virtual string GetGoodsIntroduction()
        {
                return "i7级8核16线Cpu，军工级主板，16G大内存，8G显卡，你值得拥有";
        }
        virtual double GetGoodsPrice()
        {
                return 5899;
        }
        virtual double GetAssets()
        {
                return 80000;
        }
};

class i9Computer : public ElectricalShop
{
public:
        i9Computer() = default;
        virtual string GetShopName()
        {
                return "航天级电脑旗舰店";
        }
        virtual string GetGoodsName()
        {
                return "i9高端游戏电脑";
        }
        virtual string GetGoodsIntroduction()
        {
                return "i9级10核20线Cpu，航天级主板，32G大内存，12G显卡，你值得拥有";
        }
        virtual double GetGoodsPrice()
        {
                return 9999;
        }
        virtual double GetAssets()
        {
                return 100000;
        }
};

class ComputerPeripherals : public ElectricalShop
{
public:
        ComputerPeripherals() = default;
        virtual string GetShopName()
        {
                return "高端电脑外设旗舰店";
        }
        virtual string GetGoodsName()
        {
                return "电脑外设套装";
        }
        virtual string GetGoodsIntroduction()
        {
                return "好马配好鞍，外设套装你怎么能没有";
        }
        virtual double GetGoodsPrice()
        {
                return 2999;
        }
        virtual double GetAssets()
        {
                return 50000;
        }
};