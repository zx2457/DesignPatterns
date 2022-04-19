#pragma once
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Visitor;

using StoreList = vector<string>;

class Store
{
protected:
        StoreList m_storeList;
public:
        Store() {}
        virtual ~Store() {}
public:
        virtual void AcceptAccess(Visitor* v) = 0;
        virtual StoreList GetCommodityList() { return m_storeList; }
};