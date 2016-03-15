#include <stdio.h>
#include "DNServer.h"
#include "Browser.h"
#include "MyServer.h"
#include "ProxyServer.h"
#include "HttpServer.h"


/****
 *  1) Odd browser with identity divisible by three will not be allowed to connect httpserver 
 ****/

int main(int argc, char* argv[])
{
    printf("Implementation of proxy design pattern\n");
    MyServer* myserver = new ProxyServer("1111", new HttpServer("1212"));
    Browser* firefox = new Browser(5);
    Browser* opera= new Browser(8);
    Browser* chrome= new Browser(13);

    firefox->getIPAddr("readcpp.com");
    return 0;
}
