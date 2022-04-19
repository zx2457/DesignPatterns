#include "i7Mainframe.h"
#include "AccessoriesHardDisk.h"
#include "AccessoriesMemoryBank.h"

int main()
{
        Mainframe* i7 = new i7Mainframe;
        Mainframe* ahd = new AccessoriesHardDisk(i7);
        Mainframe* amb = new AccessoriesMemoryBank(ahd);
        cout << "��Ʒ��" << ahd->GetName() << "�۸�" << ahd->GetPrice() << endl;
        cout << "��Ʒ��" << amb->GetName() << "�۸�" << amb->GetPrice() << endl;

        Mainframe* al = new AccessoriesHardDisk(new AccessoriesMemoryBank(new i7Mainframe));
        cout << "��Ʒ��" << al->GetName() << "�۸�" << al->GetPrice() << endl;

        delete amb;
        delete al;
        getchar();
        return 0;
}