#include <stdio.h>
#include "IAbsFactory.h"
#include "WinFactory.h"

#define _WIN_

int main(int argc, char* argv[])
{

    //Windows
    IAbsFacory *af = NULL;
#ifdef _WIN_
    af = new WinFactory();
#endif

    if(NULL != af)   { 
        IButton *b = af->CreateButton(); 
        b->draw();
    }
    return 0;
}
