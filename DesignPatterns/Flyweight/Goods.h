#pragma once
#include "BaseGoods.h"

class Goods : public BaseGoods
{
private:
        string m_goodsName;
public:
        Goods(const string& n) : m_goodsName(n) {}
        virtual ~Goods() {}
public:
        virtual string GetGoodsName()
        {
                return m_goodsName;
        }
};