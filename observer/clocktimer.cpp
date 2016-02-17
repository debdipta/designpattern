#include "clocktimer.h"

clocktimer::~clocktimer()
{

}

int clocktimer::getHour()
{
    return _hour;
}

int clocktimer::getMin()
{
    return _min;
}

int clocktimer::getSec()
{
    return _sec;
}

void clocktimer::tick()
{
    updatetimes();
    notify();
}

void clocktimer::updatetimes()
{
    _hour++; _min++; _sec++;
}
