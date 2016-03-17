#ifndef __IDNSSERVER__
#define __IDNSSERVER__

#include "common.h"
/*
 * It's responsibility of every DNS server to add next DNS server in their so that a chain of DNS server is created and
 * any pointof time a particular ip is found
 *
 */
class IDNServer
{
public:
    virtual void AddNextDNS(IDNServer*) = 0;
    virtual serverdetails* getServerObj(const string& ) = 0;
};


#endif
