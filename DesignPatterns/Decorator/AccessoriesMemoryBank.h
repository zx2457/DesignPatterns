#pragma once
#include "Accessories.h"

class AccessoriesMemoryBank : public Accessories
{
public:
        AccessoriesMemoryBank(Mainframe* mf) : Accessories(mf) {}
        ~AccessoriesMemoryBank() {}
        virtual string GetName()
        {
                return m_mainframe->GetName().append("  ¼Ó16GÄÚ´æÌõ");
        }
        virtual double GetPrice()
        {
                return m_mainframe->GetPrice() + 1099;
        }
};