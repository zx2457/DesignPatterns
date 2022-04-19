#pragma once
#include "IProduct.h"
#include <stdio.h>

class i3Hostparts : public IProduct
{
public:
        ~i3Hostparts(){}
        virtual void CreateCpu()
        {
                printf("������һ��12��i3Cpu\n");
        }
        virtual void CreateMainboard()
        {
                printf("������һ��h510����\n");
        }
        virtual void CreateGraphicscard()
        {
                printf("������һ��3050Ti�Կ�\n");
        }
        virtual void CreateMemorybank()
        {
                printf("������һ��8G�ڴ�\n");
        }
        virtual void CreateHarddisk()
        {
                printf("������һ��250G M.2Ӳ��\n");
        }
        virtual void CreatePowersupply()
        {
                printf("������һ��550w��Դ\n");
        }
        virtual void CreateHeatdissipation()
        {
                printf("������һ������ɢ��\n");
        }
        virtual void CreateComputercase()
        {
                printf("������һ�������߰�Ӱ����\n");
        }
};

class i5Hostparts : public IProduct
{
public:
        ~i5Hostparts(){}
        virtual void CreateCpu()
        {
                printf("������һ��12��i5Cpu\n");
        }
        virtual void CreateMainboard()
        {
                printf("������һ��b560����\n");
        }
        virtual void CreateGraphicscard()
        {
                printf("������һ��3060Ti�Կ�\n");
        }
        virtual void CreateMemorybank()
        {
                printf("������һ��8G�ڴ�\n");
        }
        virtual void CreateHarddisk()
        {
                printf("������һ��250G M.2Ӳ��\n");
        }
        virtual void CreatePowersupply()
        {
                printf("������һ��650w��Դ\n");
        }
        virtual void CreateHeatdissipation()
        {
                printf("������һ������ɢ��\n");
        }
        virtual void CreateComputercase()
        {
                printf("������һ�������߻���\n");
        }
};

class i7Hostparts : public IProduct
{
public:
        ~i7Hostparts(){}
        virtual void CreateCpu()
        {
                printf("������һ��12��i7Cpu\n");
        }
        virtual void CreateMainboard()
        {
                printf("������һ��z590����\n");
        }
        virtual void CreateGraphicscard()
        {
                printf("������һ��3070Ti�Կ�\n");
        }
        virtual void CreateMemorybank()
        {
                printf("������һ��16G�ڴ�\n");
        }
        virtual void CreateHarddisk()
        {
                printf("������һ��500G M.2Ӳ��\n");
        }
        virtual void CreatePowersupply()
        {
                printf("������һ��700w��Դ\n");
        }
        virtual void CreateHeatdissipation()
        {
                printf("������һ��240ˮ��ɢ��\n");
        }
        virtual void CreateComputercase()
        {
                printf("������һ����λ���\n");
        }
};

class i9Hostparts : public IProduct
{
public:
        ~i9Hostparts(){}
        virtual void CreateCpu()
        {
                printf("������һ��12��i9Cpu\n");
        }
        virtual void CreateMainboard()
        {
                printf("������һ��z690-e����\n");
        }
        virtual void CreateGraphicscard()
        {
                printf("������һ��3090Ti�Կ�\n");
        }
        virtual void CreateMemorybank()
        {
                printf("������һ��32G�ڴ�\n");
        }
        virtual void CreateHarddisk()
        {
                printf("������һ��1T M.2Ӳ��\n");
        }
        virtual void CreatePowersupply()
        {
                printf("������һ��1200w��Դ\n");
        }
        virtual void CreateHeatdissipation()
        {
                printf("������һ��360ˮ��ɢ��\n");
        }
        virtual void CreateComputercase()
        {
                printf("������һ��̫�������\n");
        }
};