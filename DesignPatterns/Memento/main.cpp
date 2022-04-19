#include "Caretake.h"
#include "Originator.h"

int main()
{
        Caretake caretake;
        Originator orig;
        orig.Load(Memento("你"));
        caretake.Save(orig.Save());
        orig.Load(Memento("你好"));
        caretake.Save(orig.Save());
        orig.Load(Memento("你好世"));
        caretake.Save(orig.Save());
        orig.Load(Memento("你好世界"));
        caretake.Save(orig.Save());
        orig.Load(Memento("你好世界！"));
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