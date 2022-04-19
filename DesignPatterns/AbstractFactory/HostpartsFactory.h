#pragma once
#include "IFactory.h"
#include "Hostparts.h"
#include <vector>
#include <functional>

class i3AssemblyFactory : IFactory
{
public:
        ~i3AssemblyFactory(){}
        virtual void AssembleTheHost()
        {
                IProduct* i3 = new i3Hostparts;
                i3->CreateComputerAccessories();
                printf("��װi3�������!\n");
        }
};

class i5AssemblyFactory : IFactory
{
public:
        ~i5AssemblyFactory(){}
        virtual void AssembleTheHost()
        {
                IProduct* i5 = new i5Hostparts;
                i5->CreateComputerAccessories();
                printf("��װi5�������!\n");
        }
};

class i7AssemblyFactory : IFactory
{
public:
        ~i7AssemblyFactory(){}
        virtual void AssembleTheHost()
        {
                IProduct* i7 = new i7Hostparts;
                i7->CreateComputerAccessories();
                printf("��װi7�������!\n");
        }
};

class i9AssemblyFactory : IFactory
{
public:
        ~i9AssemblyFactory(){}
        virtual void AssembleTheHost()
        {
                IProduct* i9 = new i9Hostparts;
                i9->CreateComputerAccessories();
                printf("��װi9�������!\n");
        }
};


class DiyAssemblyFactory : IFactory
{
public:
        typedef std::function<void(void)> func;
private:
        std::vector<func> m_diyAccessories;
public:
        ~DiyAssemblyFactory(){}
        virtual void AssembleTheHost()
        {
                for (auto iter = m_diyAccessories.begin(); iter != m_diyAccessories.end(); ++iter)
                {
                        (*iter)();
                }
                printf("��װDiy�������!\n");
        }
        void addDiyAccessories(func fc)
        {
                m_diyAccessories.push_back(fc);
        }
};