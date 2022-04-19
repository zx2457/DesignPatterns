#pragma once
#include "IComposite.h"

class ChildControl : public IComposite
{
public:
        ChildControl() {}
        virtual ~ChildControl() {}
        virtual void ShowWindows()
        {
                cout << "已显示子控件：" << GetObjectName() << endl;
        }
private:
        virtual void AddObject(IComposite* obj)
        {
                cout << "子控件没有此方法" << endl;
        }
        virtual void RemoveObject(IComposite* obj)
        {
                cout << "子控件没有此方法" << endl;
        }
};