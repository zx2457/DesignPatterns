#include "Transporter.h"
#include "ConcreteObserver.h"

//模拟多人玩家对战 血掉没了就淘汰一个 通知到其他玩家客户端 告诉他们这个人淘汰了
int main()
{
        shared_ptr<Transporter> transporter(new Transporter);
        shared_ptr<Player> p1(new Player("玩家1"));
        shared_ptr<Player> p2(new Player("玩家2"));
        shared_ptr<Player> p3(new Player("玩家3"));
        shared_ptr<Player> p4(new Player("玩家4"));
        transporter->AddWatcher(p1.get());
        transporter->AddWatcher(p2.get());
        transporter->AddWatcher(p3.get());
        transporter->AddWatcher(p4.get());
        transporter->NotifyWatchers();

        getchar();
        return 0;
}