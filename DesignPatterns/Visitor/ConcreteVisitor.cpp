#include "ConcreteVisitor.h"
#include "Store.h"

Customer::Customer()
{

}

void Customer::AccessStore(Store* s)
{
        cout << "µêÆÌÓÐ£º" << endl;
        for (auto iter : s->GetCommodityList())
        {
                cout << iter << "  ";
        }
        cout << endl << "¹Ë¿Í¹ºÂòÁË" << s->GetCommodityList().at(0) << endl;
}
