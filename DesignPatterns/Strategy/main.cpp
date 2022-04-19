#include "ConcreteStrategy.h"
#include "Context.h"
#include <iostream>

void PrintArray(int arr[], int len)
{
        for(int i = 0; i < len; ++i) cout << arr[i];
        cout << endl;
}

#define ARR_LENGTH 10
int main()
{
        int arr[] = { 5, 3, 8, 4, 9, 7, 2, 0, 1, 6 };
        shared_ptr<BubbleSort> bs(new BubbleSort);
        shared_ptr<C11Sort> cs(new C11Sort);
        shared_ptr<SelectSort> ss(new SelectSort);
        shared_ptr<ContextSort> context(new ContextSort(bs.get()));

        context->Sort(arr, ARR_LENGTH);
        context->SetContext(cs.get());
        context->SetContext(ss.get());
        PrintArray(arr, ARR_LENGTH);

        getchar();
        return 0;
}