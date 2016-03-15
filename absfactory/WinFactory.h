#include "IAbsFactory.h"
#include "IButton.h"
#include "WinButton.h"


class WinFactory : public IAbsFacory
{
    public:
    IButton* CreateButton()
    {
        return new WinButton();
    }
    IButton* CreateTxt()
    {
        return new WinTxt();
    }
    IButton* CreateScr()
    {
        return new WinScr();
    }

};


