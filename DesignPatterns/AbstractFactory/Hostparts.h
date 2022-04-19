#pragma once
#include "IProduct.h"
#include <stdio.h>

class i3Hostparts : public IProduct
{
public:
        ~i3Hostparts(){}
        virtual void CreateCpu()
        {
                printf("创建了一个12代i3Cpu\n");
        }
        virtual void CreateMainboard()
        {
                printf("创建了一个h510主板\n");
        }
        virtual void CreateGraphicscard()
        {
                printf("创建了一个3050Ti显卡\n");
        }
        virtual void CreateMemorybank()
        {
                printf("创建了一个8G内存\n");
        }
        virtual void CreateHarddisk()
        {
                printf("创建了一个250G M.2硬盘\n");
        }
        virtual void CreatePowersupply()
        {
                printf("创建了一个550w电源\n");
        }
        virtual void CreateHeatdissipation()
        {
                printf("创建了一个风冷散热\n");
        }
        virtual void CreateComputercase()
        {
                printf("创建了一个爱国者暗影机箱\n");
        }
};

class i5Hostparts : public IProduct
{
public:
        ~i5Hostparts(){}
        virtual void CreateCpu()
        {
                printf("创建了一个12代i5Cpu\n");
        }
        virtual void CreateMainboard()
        {
                printf("创建了一个b560主板\n");
        }
        virtual void CreateGraphicscard()
        {
                printf("创建了一个3060Ti显卡\n");
        }
        virtual void CreateMemorybank()
        {
                printf("创建了一个8G内存\n");
        }
        virtual void CreateHarddisk()
        {
                printf("创建了一个250G M.2硬盘\n");
        }
        virtual void CreatePowersupply()
        {
                printf("创建了一个650w电源\n");
        }
        virtual void CreateHeatdissipation()
        {
                printf("创建了一个风冷散热\n");
        }
        virtual void CreateComputercase()
        {
                printf("创建了一个复仇者机箱\n");
        }
};

class i7Hostparts : public IProduct
{
public:
        ~i7Hostparts(){}
        virtual void CreateCpu()
        {
                printf("创建了一个12代i7Cpu\n");
        }
        virtual void CreateMainboard()
        {
                printf("创建了一个z590主板\n");
        }
        virtual void CreateGraphicscard()
        {
                printf("创建了一个3070Ti显卡\n");
        }
        virtual void CreateMemorybank()
        {
                printf("创建了一个16G内存\n");
        }
        virtual void CreateHarddisk()
        {
                printf("创建了一个500G M.2硬盘\n");
        }
        virtual void CreatePowersupply()
        {
                printf("创建了一个700w电源\n");
        }
        virtual void CreateHeatdissipation()
        {
                printf("创建了一个240水冷散热\n");
        }
        virtual void CreateComputercase()
        {
                printf("创建了一个玩嘉机箱\n");
        }
};

class i9Hostparts : public IProduct
{
public:
        ~i9Hostparts(){}
        virtual void CreateCpu()
        {
                printf("创建了一个12代i9Cpu\n");
        }
        virtual void CreateMainboard()
        {
                printf("创建了一个z690-e主板\n");
        }
        virtual void CreateGraphicscard()
        {
                printf("创建了一个3090Ti显卡\n");
        }
        virtual void CreateMemorybank()
        {
                printf("创建了一个32G内存\n");
        }
        virtual void CreateHarddisk()
        {
                printf("创建了一个1T M.2硬盘\n");
        }
        virtual void CreatePowersupply()
        {
                printf("创建了一个1200w电源\n");
        }
        virtual void CreateHeatdissipation()
        {
                printf("创建了一个360水冷散热\n");
        }
        virtual void CreateComputercase()
        {
                printf("创建了一个太阳神机箱\n");
        }
};