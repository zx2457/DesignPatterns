#include "ThreadPool.h"
#include <stdio.h>
#include <windows.h>

int i = 1;

int main()
{
        ThreadPool::fnTask th = [=]{ printf("%d\n", i++); };
        ThreadPool tp;
        for (int i = 0; i < 20; ++i)
        {
                tp.AddTask(th);
        }
        tp.StartThreadPool();

        Sleep(2000);

        for (int i = 0; i < 15; ++i)
        {
                tp.AddTask(th);
        }

        Sleep(1000);

        for (int i = 0; i < 8; ++i)
        {
                tp.AddTask(th);
        }

        tp.StopThreadPool();

        getchar();
        return 0;
}