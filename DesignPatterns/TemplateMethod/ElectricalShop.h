#pragma once
#include <string>
#include <iostream>
using namespace std;

class ElectricalShop
{
public:
        virtual ~ElectricalShop() = default;
public:
        virtual string GetShopName() = 0;
        virtual string GetGoodsName() = 0;
        virtual string GetGoodsIntroduction() = 0;
        virtual double GetGoodsPrice() = 0;
        virtual double GetAssets() = 0;
};