#include "MsgModerState.h"

int main()
{
        auto fn = [](string str){ cout << "当前进度：" << str << endl; };
        Context* context = new Context;
        context->SetState(new SubmitMsg(fn));
        context->CheckFinished();
        context->CheckFinished();
        context->CheckFinished();
        context->CheckFinished();

        delete context;
        getchar();
        return 0;
}