#pragma once
#include <unordered_map>
#include "Goods.h"

#define UNUSED(p) (p) //ȥ�� warning C4101δ���õľֲ����� ����

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
                        cout << "��ȡ��" << godName << "��Ʒ��û�в鵽������һ���µ���Ʒ" << endl;
                }
                return g;
        }
        auto GetHashSize()
        {
                return m_goodsHash.size();
        }
};