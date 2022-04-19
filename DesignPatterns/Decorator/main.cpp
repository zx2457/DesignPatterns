#include "i7Mainframe.h"
#include "AccessoriesHardDisk.h"
#include "AccessoriesMemoryBank.h"

int main()
{
        Mainframe* i7 = new i7Mainframe;
        Mainframe* ahd = new AccessoriesHardDisk(i7);
        Mainframe* amb = new AccessoriesMemoryBank(ahd);
        cout << "产品：" << ahd->GetName() << "价格：" << ahd->GetPrice() << endl;
        cout << "产品：" << amb->GetName() << "价格：" << amb->GetPrice() << endl;

        Mainframe* al = new AccessoriesHardDisk(new AccessoriesMemoryBank(new i7Mainframe));
        cout << "产品：" << al->GetName() << "价格：" << al->GetPrice() << endl;

        delete amb;
        delete al;
        getchar();
        return 0;
}