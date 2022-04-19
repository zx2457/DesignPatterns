#include "Stores.h"
#include "Visitor.h"

ComputerStore::ComputerStore()
{
        m_storeList = { "i3电脑主机", "i5电脑主机", "i7电脑主机", "i9电脑主机" };
}

void ComputerStore::AcceptAccess(Visitor* v)
{
        v->AccessStore(this);
}

XiaoMiStore::XiaoMiStore()
{
        m_storeList = { "小米11", "小米12", "小米12 Pro", "小米12 法拉利联名款" };
}

void XiaoMiStore::AcceptAccess(Visitor* v)
{
        v->AccessStore(this);
}
