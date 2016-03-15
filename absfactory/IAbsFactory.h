#ifndef __ABSFAC__
#define __ABSFAC__

#include "IButton.h"

class IAbsFacory
{
    public:
        virtual IGui* CreateButton() = 0;
        virtual IGui* CreateTxt() = 0;
        virtual IGui* CreateScr() = 0;
};

#endif
