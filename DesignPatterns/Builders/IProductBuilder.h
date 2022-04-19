#pragma once
#include "Builder.h"
#include <memory>

class i3Builder : public Builder
{
public:
        i3Builder() { m_i3IProduct.reset(new IProduct); }
        ~i3Builder() {}
private:
        shared_ptr<IProduct> m_i3IProduct;
public:
        virtual void BuildCpu()
        {
                m_i3IProduct->SetCpu("i3CPU");
                cout << "建造了：" << m_i3IProduct->GetCpu() << endl;
        }
        virtual void BuildMainboard()
        {
                m_i3IProduct->SetMainboard("h510主板");
                cout << "建造了：" << m_i3IProduct->GetMainboard() << endl;
        }
        virtual void BuildGraphicscard()
        {
                m_i3IProduct->SetGraphicscard("3050Ti显卡");
                cout << "建造了：" << m_i3IProduct->GetGraphicscard() << endl;
        }
        virtual void BuildMemorybank()
        {
                m_i3IProduct->SetMemorybank("8G内存");
                cout << "建造了：" << m_i3IProduct->GetMemorybank() << endl;
        }
        virtual void BuildHarddisk()
        {
                m_i3IProduct->SetHarddisk("250G M.2硬盘");
                cout << "建造了：" << m_i3IProduct->GetHarddisk() << endl;
        }
        virtual void BuildPowersupply()
        {
                m_i3IProduct->SetPowersupply("550w电源");
                cout << "建造了：" << m_i3IProduct->GetPowersupply() << endl;
        }
        virtual void BuildHeatdissipation()
        {
                m_i3IProduct->SetHeatdissipation("风冷散热");
                cout << "建造了：" << m_i3IProduct->GetHeatdissipation() << endl;
        }
        virtual void BuildComputercase()
        {
                m_i3IProduct->SetComputercase("爱国者暗影机箱");
                cout << "建造了：" << m_i3IProduct->GetComputercase() << endl;
        }
        virtual shared_ptr<IProduct> BuildProduct()
        {
                cout << "i3主机建造完成" << endl;
                return m_i3IProduct;
        }
};

class i5Builder : public Builder
{
public:
        i5Builder() { m_i5IProduct.reset(new IProduct); }
        ~i5Builder() {}
private:
        shared_ptr<IProduct> m_i5IProduct;
public:
        virtual void BuildCpu()
        {
                m_i5IProduct->SetCpu("i5CPU");
                cout << "建造了：" << m_i5IProduct->GetCpu() << endl;
        }
        virtual void BuildMainboard()
        {
                m_i5IProduct->SetMainboard("b690主板");
                cout << "建造了：" << m_i5IProduct->GetMainboard() << endl;
        }
        virtual void BuildGraphicscard()
        {
                m_i5IProduct->SetGraphicscard("3060Ti显卡");
                cout << "建造了：" << m_i5IProduct->GetGraphicscard() << endl;
        }
        virtual void BuildMemorybank()
        {
                m_i5IProduct->SetMemorybank("16G内存");
                cout << "建造了：" << m_i5IProduct->GetMemorybank() << endl;
        }
        virtual void BuildHarddisk()
        {
                m_i5IProduct->SetHarddisk("500G M.2硬盘");
                cout << "建造了：" << m_i5IProduct->GetHarddisk() << endl;
        }
        virtual void BuildPowersupply()
        {
                m_i5IProduct->SetPowersupply("650w电源");
                cout << "建造了：" << m_i5IProduct->GetPowersupply() << endl;
        }
        virtual void BuildHeatdissipation()
        {
                m_i5IProduct->SetHeatdissipation("风冷散热");
                cout << "建造了：" << m_i5IProduct->GetHeatdissipation() << endl;
        }
        virtual void BuildComputercase()
        {
                m_i5IProduct->SetComputercase("复仇者机箱");
                cout << "建造了：" << m_i5IProduct->GetComputercase() << endl;
        }
        virtual shared_ptr<IProduct> BuildProduct()
        {
                cout << "i5主机建造完成" << endl;
                return m_i5IProduct;
        }
};