#pragma once
#include "Visitor.h"

class Customer : public Visitor
{
public:
        Customer();
        virtual void AccessStore(Store* s);
};