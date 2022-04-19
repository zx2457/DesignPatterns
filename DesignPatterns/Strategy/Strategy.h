#pragma once

class StrategySort
{
public:
        StrategySort() = default;
        virtual ~StrategySort() = default;
        virtual void Sort(int arr[], int length) = 0;
};