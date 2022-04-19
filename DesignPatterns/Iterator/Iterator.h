#pragma once

template <typename T>
class Iterator
{
public:
        Iterator() = default;
        virtual ~Iterator() = default;
public:
        virtual T Next() = 0;
        virtual bool hasNext() = 0;
};