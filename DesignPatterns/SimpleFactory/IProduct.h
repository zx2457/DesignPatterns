#pragma once

/*
�����Ʒ�ࣺ���ṩ��Ʒ��Ҫ�����ķ���������ʵ���������ṩ
*/
class IProduct
{
public:
        virtual ~IProduct() {}
        virtual void PrintProductName() = 0;
};