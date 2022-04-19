#include "Adapter.h"

int main()
{
        shared_ptr<Adapter> adapter(new Adapter("HelloWorld"));
        adapter->printAdd();
        adapter->printMinus();

        getchar();
        return 0;
}