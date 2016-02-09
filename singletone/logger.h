#ifndef __LOGGER__
#define __LOGGER__

#include <stdio.h>

//#define DEBUGL1
//#define DEBUGL2
//#define DEBUGL3

#define LOGMSG_SIZE 255

enum    {
    L1,
    L2,
    L3
};

#ifdef DEBUGL1 
#define LOG( _level, ...)   {    \
    do  {   \
        printf("%d", _level);   \
        if( L1 == _level )  {       \
            char __msg[LOGMSG_SIZE] = {0} ;    \
            sprintf(__msg,"%s() : %d : %s\n",               \
                    __FUNCTION__,       \
                    __LINE__,      \
                    __VA_ARGS__); \
            logger::getInstance()->write_file(__msg); \
        }           \
    }while(0);    \
}
#endif

#ifdef DEBUGL2 
#define LOG(_level, ...)   {    \
    do  {   \
        if( L2 == _level )  {       \
            char __msg[LOGMSG_SIZE] = {0} ;    \
            sprintf(__msg,"%s() : %d : %s\n",               \
                    __FUNCTION__,       \
                    __LINE__,      \
                    __VA_ARGS__); \
            logger::getInstance()->write_file(__msg); \
        }           \
    }while(0);    \
}
#endif

#ifdef DEBUGL3 
#define LOG(_level, ...)   {    \
    do  {   \
        if( L3 == _level )  {       \
            char __msg[LOGMSG_SIZE] = {0} ;    \
            sprintf(__msg,"%s() : %d : %s\n",               \
                    __FUNCTION__,       \
                    __LINE__,      \
                    __VA_ARGS__); \
            logger::getInstance()->write_file(__msg); \
        }           \
    }while(0);    \
}
#endif

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
