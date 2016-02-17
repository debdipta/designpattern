#include "digitalclock.h"
#include <stdio.h>

void digitalclock::update(subject* _changedSubject)
{
    if(_changedSubject == _subject) {
        mytime_hour =_subject->getHour(); 
        mytime_min = _subject->getMin();
        mytime_sec = _subject->getSec();
    }
}
void digitalclock::draw()
{
   printf("Digital hour=%d, min=%d, sec=%d\n", mytime_hour, mytime_min, mytime_sec); 
}
