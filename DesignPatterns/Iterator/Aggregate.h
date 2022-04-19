#pragma once
#include "Iterator.h"

template <typename T>
class Aggregate
{
public:
        Aggregate() = default;
        virtual ~Aggregate() = default;
public:
        virtual Iterator<T>* CreateIterator() = 0;
};