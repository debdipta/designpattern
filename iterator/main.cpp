#include <stdio.h>
#include "ListIterator.h"
#include "ListCollector.h"
#include "icollection.h"
#include "Iterator.h"

int main(int argc, char* argv[])
{
    property* p1 = new property(1, 1);
    property* p2 = new property(2, 2);
    property* p3 = new property(3, 3);
    property* p4 = new property(4, 4);
    property* p5 = new property(5, 5);
    property* p6 = new property(6, 6);

    icollection* my_list_collection = new ListCollection();
    my_list_collection->addmoney(p1);
    my_list_collection->addmoney(p2);
    my_list_collection->addmoney(p3);
    my_list_collection->addmoney(p4);
    my_list_collection->addmoney(p5);
    my_list_collection->addmoney(p6);

    Iterator* itr = my_list_collection->getiterator();
    while(itr->hasNext())
    {
        property* p = itr->next();
        printf("Assets: money= %d and gold=%d \n", p->money, p->gold);
    }

    return 0;
}
