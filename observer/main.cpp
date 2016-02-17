#include <stdio.h>
#include "subject.h"
#include "observer.h"
#include "clocktimer.h"
#include "digitalclock.h"
#include <unistd.h>

int main(int argc, char* argv[])
{
    printf("This is Simple demostation of Observer Pattern..!!!\n");
    
    clocktimer* _subject = new clocktimer();
    digitalclock* _observer = new digitalclock(_subject);

    for(int iCount = 0 ; iCount < 4; iCount++)  {
        _subject->tick();
    }
    _observer->draw();

    return 0;
}
