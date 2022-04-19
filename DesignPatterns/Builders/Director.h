#pragma once
#include "IProductBuilder.h"

class Director
{
public:
        Director(){}
        ~Director(){}
public:
        shared_ptr<IProduct> ConstructPerson(Builder* builder)
        {
                builder->BuildCpu();
                builder->BuildMainboard();
                builder->BuildGraphicscard();
                builder->BuildMemorybank();
                builder->BuildHarddisk();
                builder->BuildPowersupply();
                builder->BuildHeatdissipation();
                builder->BuildComputercase();
                return builder->BuildProduct();
        }
};