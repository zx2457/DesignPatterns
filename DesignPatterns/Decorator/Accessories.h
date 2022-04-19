#pragma once
#include "Mainframe.h"

class Accessories : public Mainframe
{
public:
        Accessories(Mainframe* mf) : m_mainframe(mf) {}
        virtual ~Accessories() { delete m_mainframe; }
        virtual string GetName() = 0;
protected:
        Mainframe* m_mainframe = nullptr;
};