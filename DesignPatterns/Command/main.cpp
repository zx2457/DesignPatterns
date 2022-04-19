#include "Invoker.h"
#include <iostream>

int main()
{
        Receiver* receiver = new Receiver;
        Command* command = new Command(receiver);
        Invoker* invoker = new Invoker(command);

        invoker->AddString("你");
        invoker->AddString("好");
        invoker->AddString("世");
        invoker->AddString("界");
        invoker->AddString("！");
        invoker->AddString("要被删除的");
        cout << invoker->Undo() << endl;

        delete receiver;
        delete command;
        delete invoker;
        getchar();
        return 0;
}