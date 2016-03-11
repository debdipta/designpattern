#ifndef __IFILE__
#define __IFILE__

#include "ZippableObject.h"

class IFile : public ZippableObject
{
public:
    virtual void Compress() = 0;
};

#endif
