#pragma once
/*
抽象产品类
*/

class IProduct
{
public:
        virtual ~IProduct(){}
        virtual void CreateCpu() = 0;
        virtual void CreateMainboard() = 0;
        virtual void CreateGraphicscard() = 0;
        virtual void CreateMemorybank() = 0;
        virtual void CreateHarddisk() = 0;
        virtual void CreatePowersupply() = 0;
        virtual void CreateHeatdissipation() = 0;
        virtual void CreateComputercase() = 0;
        virtual void CreateComputerAccessories()
        {
                CreateCpu();
                CreateMainboard();
                CreateGraphicscard();
                CreateMemorybank();
                CreateHarddisk();
                CreatePowersupply();
                CreateHeatdissipation();
                CreateComputercase();
        }
};