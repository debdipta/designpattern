#ifndef _CHANDLEFIVER
#define _CHANDLEFIVER

#include "IHandler.h"

class CHandlerFive: public IHandler
{
    int type;
    IHandler* next;
public:
    CHandlerFive(int type):type(type){next=NULL;};
    void HandleRequest(int reqtype)
    {
        if(reqtype == type)
            printf("CHandlerFive Can handle this Request\n");
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
