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
    list<property*> money;
public:
    ListIterator( const list<property*> &mymoney)
    {
        money = mymoney; 
        it = money.begin();
    }
    bool hasNext()
    {
        printf("NUmber of elements= %d ...\n", money.size());
        if(it != money.end())
            return true;
        return false;    
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
