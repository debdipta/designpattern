#ifndef __ISUBJECT__
#define __ISUBJECT__

#include "observer.h"
#include <iostream>
#include <list>

using namespace std;

class subject
{
    list <observer*> list_observer;
    public:
        virtual ~subject();
        virtual void attach(observer*);
        virtual void detach(observer*);
        virtual void notify();
    protected:
        subject();
};

#endif
