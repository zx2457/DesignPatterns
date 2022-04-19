#include "MainframeFactory.h"

int main()
{
        IProduct* c = MainframeFactory::CreateProduct("i3");
        IProduct* d = MainframeFactory::CreateProduct("i5");
        c->PrintProductName();
        d->PrintProductName();

        delete c;
        delete d;

        getchar();
        return 0;
}