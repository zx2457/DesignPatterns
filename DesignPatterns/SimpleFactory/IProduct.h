#pragma once

/*
抽象产品类：仅提供产品需要公开的方法，具体实现由子类提供
*/
class IProduct
{
public:
        virtual ~IProduct() {}
        virtual void PrintProductName() = 0;
};