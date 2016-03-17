#ifndef __GOOGLEDNSDERVER__
#define __GOOGLEDNSDERVER__

#include "IDNServer.h"

class GoogleDNServer : public IDNServer
{
    map<string,serverdetails*> table;
    IDNServer* next;
    GoogleDNServer()
    {
        next = NULL;
    }
    static GoogleDNServer* ins;
public:
    static GoogleDNServer* getIns() {
        if(NULL == ins)
            ins = new GoogleDNServer();
        return ins;    
    }
    void AddNextDNS(IDNServer* _next)
    {
        next = _next; 
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
};

GoogleDNServer* GoogleDNServer::ins = NULL;

#endif
