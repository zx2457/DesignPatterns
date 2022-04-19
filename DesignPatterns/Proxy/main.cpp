#include "Proxy.h"
#include "../Decorator/i7Mainframe.h"
#include "../Decorator/AccessoriesHardDisk.h"
#include "../Decorator/AccessoriesMemoryBank.h"

int main()
{
        People* zhangsan = new People;
        zhangsan->SetMoney(8000);
        zhangsan->SetName("����");

        People* lisi = new People;
        lisi->SetMoney(20000);
        lisi->SetName("����");

        People* wangwu = new People;
        wangwu->SetMoney(20000);
        wangwu->SetName("����");
        wangwu->SetVip(true);

        Mainframe* i7 = new i7Mainframe;
        Mainframe* i71 = new i7Mainframe;
        Mainframe* ahd = new AccessoriesHardDisk(i7);
        Mainframe* ahd1 = new AccessoriesHardDisk(i71);
        Mainframe* amb = new AccessoriesMemoryBank(ahd1);

        shared_ptr<Proxy> proxy(new Proxy);
        proxy->BuyMainFrame(zhangsan, i7);
        proxy->BuyMainFrame(lisi, ahd);
        proxy->BuyMainFrame(wangwu, amb);

        cout << zhangsan->GetName() << "�Ƿ�ӵ��������" << (zhangsan->isHaveMainframe() ? "��" : "��") << endl;
        cout << lisi->GetName() << "�Ƿ�ӵ��������" << (lisi->isHaveMainframe() ? "��" : "��") << endl;
        cout << wangwu->GetName() << "�Ƿ�ӵ��������" << (wangwu->isHaveMainframe() ? "��" : "��") << endl;

        delete zhangsan;
        delete lisi;
        delete wangwu;
        getchar();
        return 0;
}