#include <stdio.h>
#include "logger.h"

#define LOGMSG_SIZE 255

#define LOG(...)   {    \
do  {   \
       char __msg[LOGMSG_SIZE] = {0} ;    \
       sprintf(__msg,"%s() : %d : %s\n",               \
                __FUNCTION__,       \
                __LINE__,      \
                __VA_ARGS__); \
       logger::getInstance()->write_file(__msg); \
    }while(0);    \
}

int main(int argc, char * argv[])
{
    LOG("Hello World!!");
    LOG("Hello World!!");
    //logger::getInstance()->write_file("This is test");
    return 0;
}
