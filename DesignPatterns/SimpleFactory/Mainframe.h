#pragma once
#include "IProduct.h"
#include <stdio.h>

class i3Mainframe : public IProduct
{
public:
        virtual void PrintProductName()
        {
                printf("����i3����\n");
        }
};

class i5Mainframe : public IProduct
{
public:
        virtual void PrintProductName()
        {
                printf("����i5����\n");
        }
};