#pragma once
#include "IProduct.h"

class Builder
{
public:
        Builder() {}
        virtual ~Builder() {}
        virtual void BuildCpu() = 0;
        virtual void BuildMainboard() = 0;
        virtual void BuildGraphicscard() = 0;
        virtual void BuildMemorybank() = 0;
        virtual void BuildHarddisk() = 0;
        virtual void BuildPowersupply() = 0;
        virtual void BuildHeatdissipation() = 0;
        virtual void BuildComputercase() = 0;
        virtual shared_ptr<IProduct> BuildProduct() = 0;
};