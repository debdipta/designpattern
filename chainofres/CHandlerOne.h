#ifndef _CHANDLERONE__
#define _CHANDLERONE__

#include "IHandler.h"

class CHandlerOne : public IHandler
{
    int type;
    IHandler* next;
public:
    CHandlerOne(int type):type(type){next=NULL;};
    void HandleRequest(int reqtype)
    {
        if(reqtype == type)
            printf("CHandlerOne Can handle this Request\n");
        else   {
            printf("Obj %d Can't Handle this Request, Passing to next object\n", type);
            next->HandleRequest(reqtype);
        }
    }
    void AddHandler(IHandler* hnext)
    {
        next =  hnext;
    }
};

#endif
