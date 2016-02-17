#ifndef __IOBSERVER__
#define __IOBSERVER__

#include "subject.h"
class subject;
class observer
{
public:
    virtual void update(subject *theChangedSubject) = 0;
};

#endif
