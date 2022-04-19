#pragma once
#include "ConcreteStrategy.h"

class ContextSort
{
public:
        ContextSort(StrategySort* that) : m_strategySort(that){}
        void SetContext(StrategySort* that)
        {
                m_strategySort = that;
        }
        void Sort(int arr[], int length)
        {
                m_strategySort->Sort(arr, length);
        }
private:
        StrategySort* m_strategySort = nullptr;
};