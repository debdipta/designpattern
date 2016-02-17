#ifndef __CLOCKTIMER__
#define __CLOCKTIMER__

#include "subject.h"

class clocktimer : public subject
{
        int _hour, _min, _sec;

        void updatetimes();
    public:
        clocktimer():_hour(0), _min(0), _sec(0)
        {
        };
        virtual ~clocktimer();

        int getHour();
        int getMin();
        int getSec();

        void tick();
};

#endif
