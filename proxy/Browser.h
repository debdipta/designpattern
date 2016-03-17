#ifndef __BROWSER__
#define __BROWSER__

#include <iostream>
#include <string.h>

using namespace std;

class Browser
{
    int identity;
public:
    Browser(int identity):identity(identity)
    {
    }
    ~Browser()
    {
    }
    
    int getIPAddr(const string& url)
    {
        //Start for ip from localhost
        serverdetails* server = LocalDNServer::getIns()->getServerObj(url);
        if(NULL == server)
        {       
            printf("403 error: Server ip not found to connect...\n");
            return 0;
        };
        server->pServer->request(GETTXTFILE, identity); 
    }
    int getid() {
        return identity;
    }

};

#endif
