#pragma once
#include "Accessories.h"

class AccessoriesMemoryBank : public Accessories
{
public:
        AccessoriesMemoryBank(Mainframe* mf) : Accessories(mf) {}
        ~AccessoriesMemoryBank() {}
        virtual string GetName()
        {
                return m_mainframe->GetName().append("  ��16G�ڴ���");
        }
        virtual double GetPrice()
        {
                return m_mainframe->GetPrice() + 1099;
        }
};