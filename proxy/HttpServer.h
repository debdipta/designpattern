#ifndef __HTTPSERVER__
#define __HTTPSERVER__

#include <iostream>
#include <string.h>
#include "common.h"

using namespace std;

class HttpServer : public MyServer
{
    const string ip;
public:
    HttpServer(const string& ip):ip(ip)
    {
    }
    void request( COMMAND cmd , int id)
    {
        printf("Access Granted... for ip %s\n", ip.c_str());
    }
};

#endif
