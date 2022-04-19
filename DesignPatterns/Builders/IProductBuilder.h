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
                cout << "�����ˣ�" << m_i3IProduct->GetCpu() << endl;
        }
        virtual void BuildMainboard()
        {
                m_i3IProduct->SetMainboard("h510����");
                cout << "�����ˣ�" << m_i3IProduct->GetMainboard() << endl;
        }
        virtual void BuildGraphicscard()
        {
                m_i3IProduct->SetGraphicscard("3050Ti�Կ�");
                cout << "�����ˣ�" << m_i3IProduct->GetGraphicscard() << endl;
        }
        virtual void BuildMemorybank()
        {
                m_i3IProduct->SetMemorybank("8G�ڴ�");
                cout << "�����ˣ�" << m_i3IProduct->GetMemorybank() << endl;
        }
        virtual void BuildHarddisk()
        {
                m_i3IProduct->SetHarddisk("250G M.2Ӳ��");
                cout << "�����ˣ�" << m_i3IProduct->GetHarddisk() << endl;
        }
        virtual void BuildPowersupply()
        {
                m_i3IProduct->SetPowersupply("550w��Դ");
                cout << "�����ˣ�" << m_i3IProduct->GetPowersupply() << endl;
        }
        virtual void BuildHeatdissipation()
        {
                m_i3IProduct->SetHeatdissipation("����ɢ��");
                cout << "�����ˣ�" << m_i3IProduct->GetHeatdissipation() << endl;
        }
        virtual void BuildComputercase()
        {
                m_i3IProduct->SetComputercase("�����߰�Ӱ����");
                cout << "�����ˣ�" << m_i3IProduct->GetComputercase() << endl;
        }
        virtual shared_ptr<IProduct> BuildProduct()
        {
                cout << "i3�����������" << endl;
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
                cout << "�����ˣ�" << m_i5IProduct->GetCpu() << endl;
        }
        virtual void BuildMainboard()
        {
                m_i5IProduct->SetMainboard("b690����");
                cout << "�����ˣ�" << m_i5IProduct->GetMainboard() << endl;
        }
        virtual void BuildGraphicscard()
        {
                m_i5IProduct->SetGraphicscard("3060Ti�Կ�");
                cout << "�����ˣ�" << m_i5IProduct->GetGraphicscard() << endl;
        }
        virtual void BuildMemorybank()
        {
                m_i5IProduct->SetMemorybank("16G�ڴ�");
                cout << "�����ˣ�" << m_i5IProduct->GetMemorybank() << endl;
        }
        virtual void BuildHarddisk()
        {
                m_i5IProduct->SetHarddisk("500G M.2Ӳ��");
                cout << "�����ˣ�" << m_i5IProduct->GetHarddisk() << endl;
        }
        virtual void BuildPowersupply()
        {
                m_i5IProduct->SetPowersupply("650w��Դ");
                cout << "�����ˣ�" << m_i5IProduct->GetPowersupply() << endl;
        }
        virtual void BuildHeatdissipation()
        {
                m_i5IProduct->SetHeatdissipation("����ɢ��");
                cout << "�����ˣ�" << m_i5IProduct->GetHeatdissipation() << endl;
        }
        virtual void BuildComputercase()
        {
                m_i5IProduct->SetComputercase("�����߻���");
                cout << "�����ˣ�" << m_i5IProduct->GetComputercase() << endl;
        }
        virtual shared_ptr<IProduct> BuildProduct()
        {
                cout << "i5�����������" << endl;
                return m_i5IProduct;
        }
};