#include "Expressions.h"

int main()
{
        string text("mov eax, 12\nmov ebx, 15\nadd eax, 20\nsub eax, ebx\nmul eax, ebx\nidiv eax, 5");
        //string text("mov eax, 0\nadd eax, ebx\nadd eax, 12\nsub eax, 10");
        Context* context = new Context(text);
        ExplainStatement* es = new ExplainStatement;
        es->interpret(context);
        cout << "result£º" << es->execute() << endl;

        getchar();
        return 0;
}