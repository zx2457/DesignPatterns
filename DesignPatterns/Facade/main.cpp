#include "Facade.h"
#include "Peoples.h"

int main()
{
        Facade* fd = Facade::GetInstance();
        fd->BuyI7Mainframe(Peoples::GetInstance()->GetPeople("����"));

        getchar();
        return 0;
}