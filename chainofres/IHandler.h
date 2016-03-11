#ifndef __HANDLER__
#define __HANDLER__

class IHandler
{

public:
    virtual void HandleRequest(int) = 0;
    virtual void AddHandler(IHandler*) = 0;
};

#endif
