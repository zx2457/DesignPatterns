#pragma once
#include "IComposite.h"

class ChildControl : public IComposite
{
public:
        ChildControl() {}
        virtual ~ChildControl() {}
        virtual void ShowWindows()
        {
                cout << "����ʾ�ӿؼ���" << GetObjectName() << endl;
        }
private:
        virtual void AddObject(IComposite* obj)
        {
                cout << "�ӿؼ�û�д˷���" << endl;
        }
        virtual void RemoveObject(IComposite* obj)
        {
                cout << "�ӿؼ�û�д˷���" << endl;
        }
};