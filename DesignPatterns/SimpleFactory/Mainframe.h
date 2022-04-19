#pragma once
#include "IProduct.h"
#include <stdio.h>

class i3Mainframe : public IProduct
{
public:
        virtual void PrintProductName()
        {
                printf("我是i3主机\n");
        }
};

class i5Mainframe : public IProduct
{
public:
        virtual void PrintProductName()
        {
                printf("我是i5主机\n");
        }
};