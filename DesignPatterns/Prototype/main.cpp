#include "Prototype.h"

int main()
{
        shared_ptr<Prototype> proto(new Prototype("���Ǳ���¼"));
        cout << "ԭ�ͣ�";
        proto->Show();
        for (int i = 0; i < 10; ++i)
        {
                auto proto1 = proto->clone();
                cout << "��¡��";
                proto->Show();
        }

        getchar();
        return 0;
}