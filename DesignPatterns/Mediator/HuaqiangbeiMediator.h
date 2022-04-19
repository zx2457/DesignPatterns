#pragma once
#include "Mediator.h"

class HuaqiangbeiMediator : public Mediator
{
public:
        HuaqiangbeiMediator() {}
private:
        Person* m_store = nullptr;
        Person* m_people = nullptr;
public:
        virtual void SendMsgToStore(Person* store) { m_store = store; }
        virtual void SendMsgToCustomer(Person* people) { m_people = people; }
        virtual void SendMsg(string msg, Person* receiver)
        {
                if( m_store != receiver )
                        m_store->GetMessage(msg);
                else 
                        m_people->GetMessage(msg);
        }
};