#include "ChildControl.h"
#include "BaseWindow.h"

int main()
{
        shared_ptr<ChildControl> c1(new ChildControl);
        c1->SetObjectName("按钮1");
        shared_ptr<ChildControl> c2(new ChildControl);
        c2->SetObjectName("按钮2");
        shared_ptr<ChildControl> c3(new ChildControl);
        c3->SetObjectName("按钮3");
        shared_ptr<BaseWindow> w1(new BaseWindow);
        w1->SetObjectName("窗口1");
        shared_ptr<BaseWindow> w2(new BaseWindow);
        w2->SetObjectName("窗口2");

        w1->AddObject(c1.get());
        w1->AddObject(c2.get());
        w1->AddObject(c3.get());

        w2->AddObject(w1.get());
        w2->ShowWindows();
        getchar();
        return 0;
}