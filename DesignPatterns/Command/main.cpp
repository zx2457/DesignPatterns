#include "Invoker.h"
#include <iostream>

int main()
{
        Receiver* receiver = new Receiver;
        Command* command = new Command(receiver);
        Invoker* invoker = new Invoker(command);

        invoker->AddString("��");
        invoker->AddString("��");
        invoker->AddString("��");
        invoker->AddString("��");
        invoker->AddString("��");
        invoker->AddString("Ҫ��ɾ����");
        cout << invoker->Undo() << endl;

        delete receiver;
        delete command;
        delete invoker;
        getchar();
        return 0;
}