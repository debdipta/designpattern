#ifndef _CHANDLERFOUR__
#define _CHANDLERFOUR__

#include "IHandler.h"

class CHandlerFour: public IHandler
{
    int type;
    IHandler* next;
public:
    CHandlerFour(int type):type(type){next=NULL;};
    void HandleRequest(int reqtype)
    {
        if(reqtype == type)
            printf("CHandlerFour Can handle this Request\n");
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
