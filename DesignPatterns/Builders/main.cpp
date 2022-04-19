#include "Director.h"

int main()
{
        shared_ptr<Director> director(new Director);
        shared_ptr<Builder> i3(new i3Builder);
        shared_ptr<Builder> i5(new i5Builder);
        auto i31 = director->ConstructPerson(i3.get());
        auto i51 = director->ConstructPerson(i5.get());
        getchar();
        return 0;
}