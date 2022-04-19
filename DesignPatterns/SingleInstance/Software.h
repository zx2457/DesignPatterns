#pragma once
#include <mutex>
#include <stdio.h>

//懒汉模式:使用的时候才实例化，所以有线程安全隐患，加锁是为了线程安全
class Software
{
private:
        Software(){}
        ~Software(){}
public:
        bool isRegister()
        {
                /*
                省略检测是否注册的功能
                */
                return true;
        }
public:
        static Software* Instance()
        {
                m_mutex.lock();
                if (!s_software)
                {
                        s_software = new Software;
                }
                m_mutex.unlock();
                return s_software;
        }
private:
        static Software* s_software;
        static std::mutex m_mutex;
};

Software* Software::s_software = nullptr;
std::mutex Software::m_mutex;

//饿汉模式:程序运行初就已经实例化了
class Software1
{
private:
        Software1() {}
        ~Software1() {}
public:
        bool isRegister()
        {
                /*
                省略检测是否注册的功能
                */
                return true;
        }
public:
        static Software1* Instance()
        {
                return s_instance;
        }
private:
        static Software1* s_instance;
};

Software1* Software1::s_instance = new Software1;