#pragma once
#include <string>
#include <iostream>
using namespace std;

class BaseGoods
{
public:
        BaseGoods() = default;
        virtual ~BaseGoods() = default;
public:
        virtual string GetGoodsName() = 0;
};