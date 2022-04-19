#include "Transporter.h"
#include "ConcreteObserver.h"

//ģ�������Ҷ�ս Ѫ��û�˾���̭һ�� ֪ͨ��������ҿͻ��� ���������������̭��
int main()
{
        shared_ptr<Transporter> transporter(new Transporter);
        shared_ptr<Player> p1(new Player("���1"));
        shared_ptr<Player> p2(new Player("���2"));
        shared_ptr<Player> p3(new Player("���3"));
        shared_ptr<Player> p4(new Player("���4"));
        transporter->AddWatcher(p1.get());
        transporter->AddWatcher(p2.get());
        transporter->AddWatcher(p3.get());
        transporter->AddWatcher(p4.get());
        transporter->NotifyWatchers();

        getchar();
        return 0;
}