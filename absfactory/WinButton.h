
#ifndef __WinButton__
#define __WinButton__

#include <stdio.h>
#include "IButton.h"


class WinButton : public IButton
{
    public:
     void draw()
     {
        printf("Creating windows button\n");
     }
};

#endif
