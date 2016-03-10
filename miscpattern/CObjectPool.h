#ifndef __OBJPOOL__
#define __OBJPOOL__

#include "ICommand.h"
#include "CCmdOne.h"
#include "CCmdTwo.h"

#define ARRAYS 2 

class CObjectPool
{
    ICommand* array_cmd_one[ARRAYS];
    ICommand* array_cmd_two[ARRAYS];
    static int index_array_one, index_array_two;

    CObjectPool()
    {
        //index_array_one = index_array_two = 0;
        for(int iCount = 0; iCount < ARRAYS; iCount++)
            array_cmd_one[iCount] = new CCmdOne;

        for(int iCount = 0; iCount < ARRAYS; iCount++)
            array_cmd_two[iCount] = new CCmdTwo;
    }
    static CObjectPool* _obj;
public:
    static CObjectPool* getIns()
    {
        if(NULL == _obj)
            return new CObjectPool;
        return _obj;
    }
    ICommand* getObj(int type)
    {
        switch(type)    {
            case 1:
                printf("index_array_one=%d\n", index_array_one);
                if(index_array_one == (ARRAYS - 1))  {
                    printf("There is no object in pool\n");
                    return NULL;
                }
                index_array_one++;
                return array_cmd_one[index_array_one - 1];
                break;
            case 2:
                if(index_array_two == (ARRAYS - 1))  {
                    printf("There is no object in pool\n");
                    return NULL;
                }
                index_array_two++;
                return array_cmd_two[index_array_two - 1];
                break;
            default:
                break;
        }
    }
    void releaseObj(int type)
    {
        switch(type)    {
            case 1:
                index_array_one--;
                break;
            case 2:
                index_array_two--;
                break;
            default:
                break;
        }
    }
};
CObjectPool* CObjectPool::_obj = NULL;
int CObjectPool::index_array_one = 0;
int CObjectPool::index_array_two = 0;
#endif
