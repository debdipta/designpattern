#ifndef __COLLECTION__
#define __COLLECTION__

#include "Iterator.h"
#include "common.h"

class icollection
{
public:
    virtual void addmoney(property*) = 0;
    virtual void delmoney(property*) = 0;
    virtual Iterator* getiterator() = 0;
};

#endif
