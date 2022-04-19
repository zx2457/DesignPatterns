#include "Platform.h"

int main()
{
        shared_ptr<ElectricalShop> s1(new i7Computer);
        shared_ptr<ElectricalShop> s2(new i9Computer);
        shared_ptr<ElectricalShop> s3(new ComputerPeripherals);

        shared_ptr<ECommercePlatform> e1(new MouBao);
        e1->PutawayGoods(s1.get());
        e1->PutawayGoods(s2.get());
        e1->PutawayGoods(s3.get());

        shared_ptr<ECommercePlatform> e2(new MouDong);
        e2->PutawayGoods(s1.get());
        e2->PutawayGoods(s2.get());
        e2->PutawayGoods(s3.get());

        getchar();
        return 0;
}