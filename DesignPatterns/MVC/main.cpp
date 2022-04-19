#include "Controller.h"
#include <time.h>

//模拟从数据库或本地读数据
UserModel* CreateModel()
{
        srand((unsigned int)time(NULL));
        int len = rand() % 100;
        UserModel* ret = new UserModel;
        for (int i = 0; i < len; ++i)
        {
                UserInfo tmpInfo;

                char tmp[256] = { 0 };
                sprintf_s(tmp, "%d%d%d%d%d%d", rand() % 10, rand() % 10, rand() % 10, rand() % 10, rand() % 10, rand() % 10);
                tmpInfo.userName.append(tmp);
                memset(tmp, 0, 256);
                sprintf_s(tmp, "%d%d%d%d%d%d%d%d", rand() % 10, rand() % 10, rand() % 10, rand() % 10, rand() % 10, rand() % 10, rand() % 10, rand() % 10);
                tmpInfo.passWord.append(tmp);
                memset(tmp, 0, 256);
                sprintf_s(tmp, "%d%d%d", rand() % 10, rand() % 10, rand() % 10);
                tmpInfo.name.append(tmp);

                ret->addUserInfo(tmpInfo);
        }
        return ret;
}


int main()
{
        auto model = CreateModel();
        auto view = new OutView;

        auto control = new UserController(model, view);

        control->PrintAllUserInfo();
        getchar();
        return 0;
}