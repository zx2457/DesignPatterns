#include "Leaders.h"

int main()
{
        string zhangsan("张三");
        string lisi("李四");
        string wangwu("王五");

        
        Leadership* ls1 = new Director(new Manager(new GeneralManager));
        cout << ls1->ExamineandApprove(zhangsan, 500) << endl;
        cout << ls1->ExamineandApprove(lisi, 500) << endl;
        cout << ls1->ExamineandApprove(wangwu, 500) << endl;

        cout << ls1->ExamineandApprove(zhangsan, 900) << endl;
        cout << ls1->ExamineandApprove(lisi, 900) << endl;
        cout << ls1->ExamineandApprove(wangwu, 900) << endl;

        cout << ls1->ExamineandApprove(zhangsan, 1500) << endl;
        cout << ls1->ExamineandApprove(lisi, 1500) << endl;
        cout << ls1->ExamineandApprove(wangwu, 1500) << endl;

        delete ls1;
        getchar();
        return 0;
}