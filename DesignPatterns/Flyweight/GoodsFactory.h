#pragma once
#include <unordered_map>
#include "Goods.h"

#define UNUSED(p) (p) //去除 warning C4101未引用的局部变量 警告

class GoodsFactory
{
public:
        GoodsFactory() {}
        ~GoodsFactory()
        {
                for (auto iter : m_goodsHash)
                {
                        delete iter.second;
                        iter.second = nullptr;
                }
        }
private:
        unordered_map<string, Goods*> m_goodsHash;
public:
        Goods* GetGoods(const string& godName)
        {
                Goods* g = nullptr;
                try
                {
                        g = m_goodsHash.at(godName);
                }
                catch (out_of_range& oor)
                {
                        UNUSED(oor);
                        g = new Goods(godName);
                        m_goodsHash.insert(make_pair(godName, g));
                        cout << "获取了" << godName << "商品，没有查到，创建一个新的商品" << endl;
                }
                return g;
        }
        auto GetHashSize()
        {
                return m_goodsHash.size();
        }
};