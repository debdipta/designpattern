#ifndef __LISTITER__
#define __LISTITER__

#include "common.h"
#include "Iterator.h"
#include "icollection.h"
#include <iostream>
#include <list>
using namespace std;

class ListIterator : public Iterator
{
    list<property*>::iterator it;
public:
    ListIterator(icollection* myproperty)
    {
        it = myproperty->mymoney.begin();
    }
    bool hasNext()
    {
        return true;    
    }
    //Return net element
    property* next()
    {
        //return a property
        //return *it++;
        property* temp = *it;
        ++it;
        return temp;
    }
};

#endif
