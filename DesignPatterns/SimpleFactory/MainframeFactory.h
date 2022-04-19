#pragma once
#include "Mainframe.h"
#include <string>

class MainframeFactory
{
public:
        static IProduct* CreateProduct(const std::string& pdt)
        {
                if (pdt == "i3")
                {
                        return (new i3Mainframe);
                }
                else if (pdt == "i5")
                {
                        return (new i5Mainframe);
                }

                return nullptr;
        }
};
