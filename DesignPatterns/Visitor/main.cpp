#include "ConcreteVisitor.h"
#include "Stores.h"

int main()
{
        shared_ptr<Customer> customer(new Customer);
        shared_ptr<ComputerStore> computerStore(new ComputerStore);
        shared_ptr<XiaoMiStore> xiaomiStore(new XiaoMiStore);

        computerStore->AcceptAccess(customer.get());
        xiaomiStore->AcceptAccess(customer.get());

        getchar();
        return 0;
}