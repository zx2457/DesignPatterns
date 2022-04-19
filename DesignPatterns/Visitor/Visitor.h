#pragma once

class Store;

class Visitor
{
public:
        Visitor() {}
        virtual ~Visitor() {}
public:
        virtual void AccessStore(Store* s) = 0;
};