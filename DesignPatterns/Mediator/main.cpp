#include "HuaqiangbeiMediator.h"
#include "People.h"

int main()
{
        shared_ptr<HuaqiangbeiMediator> hqb(new HuaqiangbeiMediator);
        shared_ptr<Store> store(new Store);
        shared_ptr<Customer> customer(new Customer);

        hqb->SendMsgToCustomer(customer.get());
        hqb->SendMsgToStore(store.get());
        store->SetMediator(hqb.get());
        customer->SetMediator(hqb.get());

        customer->SendMessage("我想买个平板电脑");
        store->SendMessage("平板电脑3000块");

        getchar();
        return 0;
}