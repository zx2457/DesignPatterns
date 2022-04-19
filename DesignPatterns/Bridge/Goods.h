#pragma once
#include "ElectricalShop.h"

class i7Computer : public ElectricalShop
{
public:
        i7Computer() = default;
        virtual string GetShopName()
        {
                return "�����������콢��";
        }
        virtual string GetGoodsName()
        {
                return "i7��Ϸ����";
        }
        virtual string GetGoodsIntroduction()
        {
                return "i7��8��16��Cpu�����������壬16G���ڴ棬8G�Կ�����ֵ��ӵ��";
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
                return "���켶�����콢��";
        }
        virtual string GetGoodsName()
        {
                return "i9�߶���Ϸ����";
        }
        virtual string GetGoodsIntroduction()
        {
                return "i9��10��20��Cpu�����켶���壬32G���ڴ棬12G�Կ�����ֵ��ӵ��";
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
                return "�߶˵��������콢��";
        }
        virtual string GetGoodsName()
        {
                return "����������װ";
        }
        virtual string GetGoodsIntroduction()
        {
                return "������ð���������װ����ô��û��";
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