#ifndef __DNSERVER__
#define __DNSERVER__

#include <iostream>
#include <map>
#include <arpa/inet.h>
#include "MyServer.h"
#include "common.h"

using namespace std;

/*
 *  1) DNS server is used to keep a list of IP address and 
 *  its url. There may exist a number of dns server in 
 *  real world
 *  2) For this project we are keeping object of server in map
 *  to connect to server from browser
 *
 * */
class LocalDNServer
{
    map<string,serverdetails*> table;

    LocalDNServer()
    {

    }
    static LocalDNServer* ins;
public:
    ~LocalDNServer()
    {
    }
    static LocalDNServer* getIns()
    {
        if(NULL == ins)
            return new LocalDNServer();
        return ins;
    }
    bool Register(const string& url, serverdetails* pServer)
    {
        printf("Calling register\n");
        table[url] = pServer;
         printf("Map size = %d\n", table.size());
    }
    serverdetails* getServerObj(const string& url)
    {
        printf("Map size = %d\n", table.size());
        if(table.count(url) < 0)
        {
            printf("value doesn't exist...\n"); 
            return NULL;
        }
        printf("url is %s\n", url.c_str());
        return table.find(url)->second;
    }
};

LocalDNServer* LocalDNServer::ins = NULL;
#endif
