#pragma once

class Adaptee
{
public:
        virtual ~Adaptee() {}
        virtual void printAdd() = 0;
        virtual void printMinus() = 0;
};