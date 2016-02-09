#ifndef __LOGGER__
#define __LOGGER__

#include <stdio.h>

class logger
{
    FILE *__fp_log = NULL;
    const char* __logpath;
    //Constructor
    logger();
    static logger* __instance;
    public:
    ~logger();
    void write_file( const char* );
    static logger* getInstance();
};

#endif
