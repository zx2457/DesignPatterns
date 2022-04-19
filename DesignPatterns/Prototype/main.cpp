#include "Prototype.h"

int main()
{
        shared_ptr<Prototype> proto(new Prototype("我是备忘录"));
        cout << "原型：";
        proto->Show();
        for (int i = 0; i < 10; ++i)
        {
                auto proto1 = proto->clone();
                cout << "克隆：";
                proto->Show();
        }

        getchar();
        return 0;
}