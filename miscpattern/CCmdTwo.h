#ifndef __CCMDTWO__
#define __CCMDTWO__

#include <stdio.h>
#include "ICommand.h"

class CCmdTwo : public ICommand
{
    public:
        void exec()
        {
            printf("Executing Command Two\n");
        }
};

#endif
