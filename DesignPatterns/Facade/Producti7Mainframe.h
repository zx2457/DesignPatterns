#pragma once
#include "../Decorator/i7Mainframe.h"
#include "../Decorator/AccessoriesHardDisk.h"
#include "../Decorator/AccessoriesMemoryBank.h"

class Producti7Mainframe
{
public:
        Producti7Mainframe() {}
        Mainframe* CreateProduct()
        {
                Mainframe* i7 = new i7Mainframe;
                Mainframe* ahd = new AccessoriesHardDisk(i7);
                Mainframe* amb = new AccessoriesMemoryBank(ahd);
                return amb;
        }
};