#include "ThreadPool.h"

ThreadPool::ThreadPool() : m_isStart(false)
{

}

ThreadPool::~ThreadPool()
{
        for (int i = 0; i < m_thArr.size(); ++i)
        {
                delete m_thArr.at(i);
        }
}

ThreadPool::fnTask ThreadPool::take()
{
        unique_lock<mutex> lck(m_mutex);
        if (m_queueTask.empty() && m_isStart)
        {
                m_cond.wait(lck);
        }

        fnTask fntask;
        if (!m_queueTask.empty() && m_isStart)
        {
                fntask = m_queueTask.front();
                m_queueTask.pop();
        }
        return fntask;
}

void ThreadPool::threadLoop()
{
        while (m_isStart)
        {
                fnTask task = take();
                if (task)
                {
                        task();
                }
        }
}

void ThreadPool::AddTask(const fnTask& tsk)
{
        unique_lock<mutex> lck(m_mutex);
        m_queueTask.push(tsk);
        m_cond.notify_all();
}

void ThreadPool::StartThreadPool()
{
        m_isStart = true;
        _ASSERT(m_thArr.empty());
        for (int i = 0; i < THREADPOOL_MAX_THREAD; ++i)
        {
                m_thArr.push_back(new thread(bind(&ThreadPool::threadLoop, this)));
        }
}

void ThreadPool::StopThreadPool()
{
        unique_lock<std::mutex> lock(m_mutex);
        m_isStart = false;
        m_cond.notify_all();
}
