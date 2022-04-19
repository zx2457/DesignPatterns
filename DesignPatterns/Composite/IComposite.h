#pragma once
#include <string>
#include <iostream>
#include <list>
using namespace std;

class IComposite
{
public:
        IComposite() = default;
        virtual ~IComposite() = default;
private:
        string m_objName;
public:
        virtual void SetObjectName(string objName) { m_objName = objName; }
        virtual string GetObjectName() const { return m_objName; }
        virtual void ShowWindows() = 0;
protected:
        virtual void AddObject(IComposite* obj) = 0;
        virtual void RemoveObject(IComposite* obj) = 0;
};