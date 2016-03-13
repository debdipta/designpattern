#ifndef __ITERATOR__
#define __ITERATOR__

#include "common.h"

class Iterator 
{

public:
    virtual bool hasNext() = 0;
    virtual property* next() = 0;
};
#endif
