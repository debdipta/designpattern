#ifndef __DNSERVER__
#define __DNSERVER__

#include <iostream>
#include <map>
#include "MyServer.h"
#include "common.h"
#include <stdlib.h>

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
            ins = new LocalDNServer();
        return ins;
    }
    bool Register(const string& url, serverdetails* pServer)
    {
        //table[url] = pServer;
        table.insert(make_pair(url,pServer));// = pServer;
    }
    serverdetails* getServerObj(const string& url)
    {
        return table.find(url)->second;
    }
};

LocalDNServer* LocalDNServer::ins = NULL;
#endif
