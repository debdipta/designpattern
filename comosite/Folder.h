#ifndef __FOLDER__
#define __FOLDER__

#include <iostream>
#include <vector>
#include "ZippableObject.h"

class Folder : public ZippableObject
{
    vector<ZippableObject*> items;
    int value;
public:
    Folder(int value):value(value){};
    void Compress()
    {
        printf("Compressing Folder %d\n", value);
        for(vector<ZippableObject*>::iterator it = items.begin(); it != items.end(); it++)
        {
            (*it)->Compress();
        }
    }
    void add(ZippableObject* item)
    {
        items.push_back(item);
    }
};

#endif
