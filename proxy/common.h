#ifndef __COMMON__
#define __COMMON__

#include <iostream>
#include <string.h>

using namespace std;
#include "MyServer.h"
class MyServer;

typedef struct server 
{
    string ip;
    MyServer* pServer;
public:
    server(const string& _ip, MyServer* _pServer)
    {
        ip = _ip;
        pServer = _pServer;
    }
} serverdetails;

enum COMMAND {
    GETHTTPFILE,
    GETTXTFILE,
    GETIMAGEFILE
};

#endif
