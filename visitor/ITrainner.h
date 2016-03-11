#ifndef __ITRAINNER__
#define __ITRAINNER__

#include "IStudent.h"
class IStudent;
class ITrainner
{
public:
    virtual void MakeChange(IStudent*) = 0;
    //virtual void MakeChange() = 0;
    virtual int getSpecialID() = 0;
};

#endif
