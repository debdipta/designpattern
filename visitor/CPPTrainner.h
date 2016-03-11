#ifndef __CPPTRAINNER__
#define __CPPTRAINNER__

#include "IStudent.h"
#include "ITrainner.h"

class CppTrainner : public ITrainner
{
    int trainner_type;
    int magic_num;
    public:
    CppTrainner(int val):trainner_type(val)
    {
        magic_num = 365;
    };
    int getSpecialID()
    {
        return trainner_type;
    }
    void MakeChange(IStudent* student)
    //void MakeChange()
    {
        student->SetState(magic_num);
    }
};

#endif
