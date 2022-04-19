#pragma once
#include <thread>
#include <queue>
#include <functional>
#include <vector>
#include <mutex>
#include <condition_variable>
using namespace std;

#define THREADPOOL_MAX_THREAD           10

class ThreadPool
{
public:
        ThreadPool();
        ~ThreadPool();
        ThreadPool(ThreadPool&) = delete;
        ThreadPool& operator=(ThreadPool&) = delete;
public:
        typedef function<void(void)>    fnTask;
private:
        queue<fnTask>                   m_queueTask;
        vector<thread*>                 m_thArr;
        condition_variable              m_cond;
        mutex                           m_mutex;
        bool                            m_isStart;
private:
        fnTask                          take();
        void                            threadLoop();
public:
        void                            AddTask(const fnTask& tsk);
        void                            StartThreadPool();
        void                            StopThreadPool();
};

