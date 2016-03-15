#ifndef __PROXYSERVER__
#define __PROXYSERVER__

#include <iostream>
#include <string.h>
#include "common.h"

using namespace std;

class ProxyServer : public MyServer
{
    const string ip;
    MyServer* server;
    serverdetails *pServer;
public:
    ProxyServer(const string& ip,
                    MyServer* server):ip(ip), server(server)
    {
        pServer = new serverdetails(ip, this);
        LocalDNServer::getIns()->Register("readcpp.com", pServer);
    }
    ~ProxyServer()
    {
        if(NULL != pServer)
        {
            delete pServer;
            pServer = NULL;
        }
    }
    void request( COMMAND cmd , int id)
    {
        if(!(id%4))
            printf("Access denied...\n");
        else
            server->request(cmd, id);
    }
};

#endif
