#include "Caretake.h"
#include "Originator.h"

int main()
{
        Caretake caretake;
        Originator orig;
        orig.Load(Memento("��"));
        caretake.Save(orig.Save());
        orig.Load(Memento("���"));
        caretake.Save(orig.Save());
        orig.Load(Memento("�����"));
        caretake.Save(orig.Save());
        orig.Load(Memento("�������"));
        caretake.Save(orig.Save());
        orig.Load(Memento("������磡"));
        caretake.Save(orig.Save());

        orig.PrintCurrentStr();
        caretake.CtrlAndZ(); 
        orig.Load(caretake.LoadCurrentStr());
        orig.PrintCurrentStr();
        caretake.CtrlAndY();
        orig.Load(caretake.LoadCurrentStr());
        orig.PrintCurrentStr();
               

        getchar();
        return 0;
}