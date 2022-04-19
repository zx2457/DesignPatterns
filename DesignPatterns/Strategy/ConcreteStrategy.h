#pragma once
#include "Strategy.h"
#include <memory>
#include <algorithm>
using namespace std;

class BubbleSort : public StrategySort
{
public:
        BubbleSort() {}
public:
        virtual void Sort(int arr[], int length)
        {
                if(length <= 0) return;
                for (int i = 0; i < length - 1; ++i)
                {
                        for (int j = i + 1; j < length; ++j)
                        {
                                if (arr[i] < arr[j])
                                {
                                        int tmp = arr[i];
                                        arr[i] = arr[j];
                                        arr[j] = tmp;
                                }
                        }
                }
        }
};

class C11Sort : public StrategySort
{
public:
        C11Sort() {}
public:
        virtual void Sort(int arr[], int length)
        {
                std::sort(arr, arr+length, [](int& a, int& b)
                {
                        return a > b;
                });
        }
};

class SelectSort : public StrategySort
{
public:
        SelectSort() {}
public:
        virtual void Sort(int arr[], int length)
        {
                int min;
                for (int i = 0; i < length - 1; i++)
                {
                        min = i;
                        for (int j = i + 1; j < length; j++) 
                        {
                                if (arr[j] < arr[min])
                                        min = j;
                        }
                        if (min != i)
                                swap(arr[i], arr[min]);
                }
        }
};
