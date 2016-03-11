#ifndef _CHANDLEThree__
#define _CHANDLEThree__

#include "IHandler.h"

class CHandlerThree: public IHandler
{
    int type;
    IHandler* next;
public:
    CHandlerThree(int type):type(type){next=NULL;};
    void HandleRequest(int reqtype)
    {
        if(reqtype == type)
            printf("CHandlerThree Can handle this Request\n");
        else   {
            printf("Obj %d Can't Handle this Request, Passing to next obj\n", type);
            next->HandleRequest(reqtype);
        }
    }
    void AddHandler(IHandler* hnext)
    {
        next =  hnext;
    }
};

#endif
