#include "ConcreteAggregate.h"
#include <iostream>
int main()
{
        int arr[] = { 0,1,2,3,4,5 };
        ConcreteAggregate<int> c(arr, 6);
        auto iter = c.CreateIterator();

        while(iter->hasNext())
                cout << iter->Next();

        getchar();
        return 0;
}
