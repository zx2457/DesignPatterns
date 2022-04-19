#pragma once
#include "IComposite.h"

class BaseWindow : public IComposite
{
public:
        BaseWindow() {}
        virtual ~BaseWindow() {}
protected:
        list<IComposite*> m_lstObj;
public:
        virtual void ShowWindows()
        {
                cout << "已显示地基窗口：" << GetObjectName() << endl;
                for (auto obj : m_lstObj)
                {
                        obj->ShowWindows();
                }
        }
        virtual void AddObject(IComposite* obj)
        {
                m_lstObj.push_back(obj);
        }
        virtual void RemoveObject(IComposite* obj)
        {
                m_lstObj.remove(obj);
        }
};