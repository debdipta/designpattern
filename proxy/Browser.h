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
        ((LocalDNServer::getIns()->getServerObj(url))->pServer)->request(GETTXTFILE, identity); 
    }
    int getid() {
        return identity;
    }

};

#endif
