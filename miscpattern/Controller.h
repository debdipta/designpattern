#ifndef __CONTROLLER__
#define __CONTROLLER__

#include "CmdFactory.h"

class Controller
{
    Controller(){};
    Controller(const Controller& obj){};
    static Controller* obj;
 public:
    static Controller* getIns()
    {
        if(NULL == obj)
            obj = new Controller;
        return obj; 
    };
    void ProcessReq(int req)
    {
        CmdFactory* cmdfac = CmdFactory::getIns();
        ICommand* command = cmdfac->getCmd(req);
        if(NULL != command)
            command->exec();
    }
};
Controller* Controller::obj = NULL;

#endif
