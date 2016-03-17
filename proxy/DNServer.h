#ifndef __DNSERVER__
#define __DNSERVER__

#include <iostream>
#include <map>
#include "MyServer.h"
#include "common.h"
#include <stdlib.h>
#include "IDNServer.h"

using namespace std;

/*
 *  1) DNS server is used to keep a list of IP address and 
 *  its url. There may exist a number of dns server in 
 *  real world
 *  2) For this project we are keeping object of server in map
 *  to connect to server from browser
 *
 * */
class LocalDNServer : public IDNServer
{
    map<string,serverdetails*> table;
    IDNServer* next;
    LocalDNServer()
    {
        next = NULL;
    }
    static LocalDNServer* ins;
public:
    ~LocalDNServer()
    {
        if(NULL != ins) {
            delete ins;
            ins = NULL;
        }

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
        if((table.end() == table.find(url)) && (NULL != next))
            return next->getServerObj(url);
        return table.find(url)->second;
    }
    void AddNextDNS(IDNServer* _next)
    {
        next = _next; 
    }
};

LocalDNServer* LocalDNServer::ins = NULL;
#endif
