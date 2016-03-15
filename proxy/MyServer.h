#ifndef __MYSERVER__
#define __MYSERVER__

#include "common.h"

class MyServer
{   

public:    
    virtual void request(COMMAND, int) = 0;
};

#endif
