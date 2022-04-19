#include "People.h"
#include "Mediator.h"

Store::Store()
{

}

Store::~Store()
{

}

void Store::SetMediator(Mediator* mediator)
{
        m_mediator = mediator;
}

void Store::SendMessage(std::string msg)
{
        m_mediator->SendMsg(msg, this);
}

void Store::GetMessage(std::string msg)
{
        cout << "商店收到消息：" << msg << endl;
}

Customer::Customer()
{

}

Customer::~Customer()
{

}

void Customer::SetMediator(Mediator* mediator)
{
        m_mediator = mediator;
}

void Customer::SendMessage(std::string msg)
{
        m_mediator->SendMsg(msg, this);
}

void Customer::GetMessage(std::string msg)
{
        cout << "顾客收到消息：" << msg << endl;
}
