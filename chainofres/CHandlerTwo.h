#ifndef _CHANDLERTWO__
#define _CHANDLERTwo__

#include "IHandler.h"

class CHandlerTwo: public IHandler
{
    int type;
    IHandler* next;
public:
    CHandlerTwo(int type):type(type){next=NULL;};
    void HandleRequest(int reqtype)
    {
        if(reqtype == type)
            printf("CHandlerTwoCan handle this Request\n");
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
