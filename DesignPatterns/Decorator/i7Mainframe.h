#pragma once
#include "Mainframe.h"

class i7Mainframe : public Mainframe
{
public:
        i7Mainframe()
        {
                m_name.append("i7Ö÷»ú");
        }
        virtual ~i7Mainframe() {}
        virtual double GetPrice()
        {
                return m_price;
        }
private:
        double m_price = 11899;
};