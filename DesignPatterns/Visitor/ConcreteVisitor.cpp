#include "ConcreteVisitor.h"
#include "Store.h"

Customer::Customer()
{

}

void Customer::AccessStore(Store* s)
{
        cout << "�����У�" << endl;
        for (auto iter : s->GetCommodityList())
        {
                cout << iter << "  ";
        }
        cout << endl << "�˿͹�����" << s->GetCommodityList().at(0) << endl;
}
