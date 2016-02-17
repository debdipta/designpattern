#ifndef __DIGITALCLOCK__
#define __DIGITALCLOCK__

#include "clocktimer.h"
#include "subject.h"

class digitalclock : public observer
{
    clocktimer* _subject;
    int mytime_hour, mytime_min, mytime_sec;
    public:
        digitalclock( clocktimer* _subject) : _subject(_subject)
        {
            _subject->attach(this);
        };
        ~digitalclock()
        {
            _subject->detach(this);
        };
        virtual void update(subject*);
        void draw();
};

#endif
