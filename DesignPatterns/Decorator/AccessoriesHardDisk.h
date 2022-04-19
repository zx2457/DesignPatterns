#pragma once
#include "Accessories.h"

class AccessoriesHardDisk : public Accessories
{
public:
        AccessoriesHardDisk(Mainframe* mf) : Accessories(mf) {}
        ~AccessoriesHardDisk() {}
        virtual string GetName()
        {
                return m_mainframe->GetName().append("  ��1t��еӲ��");
        }
        virtual double GetPrice()
        {
                return m_mainframe->GetPrice() + 399;
        }
};