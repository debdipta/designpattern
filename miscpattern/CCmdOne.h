#ifndef __CCMDONE__
#define __CCMDONE__

#include <stdio.h>
#include "ICommand.h"

class CCmdOne : public ICommand
{
    public:
        void exec()
        {
            printf("Executing Command One\n");
        }
};

#endif
