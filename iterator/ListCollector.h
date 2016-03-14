#ifndef __LISTCOLLECTOR__
#define __LISTCOLLECTOR__

#include <iostream>
#include <list>
#include "icollection.h"
#include "common.h"

using namespace std;

class ListCollection : public icollection
{
    list<property*> mymoney;

public:
    void addmoney( property* val) 
    {
        mymoney.push_back(val);
    }

    void delmoney(property* val)
    {
         mymoney.remove(val);    
    }
    
    Iterator* getiterator()
    {
        return new ListIterator(mymoney);
    }
};

#endif
