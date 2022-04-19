#pragma once
#include <mutex>
#include <stdio.h>

//����ģʽ:ʹ�õ�ʱ���ʵ�������������̰߳�ȫ������������Ϊ���̰߳�ȫ
class Software
{
private:
        Software(){}
        ~Software(){}
public:
        bool isRegister()
        {
                /*
                ʡ�Լ���Ƿ�ע��Ĺ���
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

//����ģʽ:�������г����Ѿ�ʵ������
class Software1
{
private:
        Software1() {}
        ~Software1() {}
public:
        bool isRegister()
        {
                /*
                ʡ�Լ���Ƿ�ע��Ĺ���
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