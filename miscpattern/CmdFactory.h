#ifndef __CMDFAC__
#define __CMDFAC__

#include "CObjectPool.h"

class CmdFactory
{
    CmdFactory(){};
    static CmdFactory* obj;
public:
    static CmdFactory* getIns()
    {
        if(obj == NULL)
            return new CmdFactory();
        return obj;
    }
    ICommand* getCmd(int val)
    {
            return CObjectPool::getIns()->getObj(val);
    }
};

CmdFactory* CmdFactory::obj = NULL;
#endif
