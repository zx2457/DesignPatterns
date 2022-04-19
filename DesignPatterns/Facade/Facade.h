#pragma once
#include "Producti7Mainframe.h"
#include "../Proxy/Proxy.h"

class Facade
{
private:
        shared_ptr<Proxy> m_proxy;
        shared_ptr<Producti7Mainframe> m_pimf;
private:
        Facade() {}
        ~Facade() = default;
        Facade(const Facade&) = delete;
        Facade(Facade&&) = delete;
        Facade& operator=(const Facade&) = delete;
        Facade& operator=(Facade&&) = delete;
public:
        void BuyI7Mainframe(People* people)
        {
                m_proxy->BuyMainFrame(people, m_pimf->CreateProduct());
        }
public:
        static Facade* GetInstance()
        {
                static Facade facade;
                return &facade;
        }
};