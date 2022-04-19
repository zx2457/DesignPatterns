#include "Stores.h"
#include "Visitor.h"

ComputerStore::ComputerStore()
{
        m_storeList = { "i3��������", "i5��������", "i7��������", "i9��������" };
}

void ComputerStore::AcceptAccess(Visitor* v)
{
        v->AccessStore(this);
}

XiaoMiStore::XiaoMiStore()
{
        m_storeList = { "С��11", "С��12", "С��12 Pro", "С��12 ������������" };
}

void XiaoMiStore::AcceptAccess(Visitor* v)
{
        v->AccessStore(this);
}
