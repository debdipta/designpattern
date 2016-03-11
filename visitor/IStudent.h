#ifndef __STUDENT__
#define __STUDENT__

#include "ITrainner.h"

class IStudent
{
    public:
    virtual void accept(ITrainner*) = 0;
    virtual void SetState(int) = 0;
};

#endif
