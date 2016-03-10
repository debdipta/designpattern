#include <stdio.h>
#include "Controller.h"

int main(int argc, char* argv[])
{
    Controller* controller = Controller::getIns();
    controller->ProcessReq(1);
    controller->ProcessReq(1);
    controller->ProcessReq(1);
    controller->ProcessReq(2);
    controller->ProcessReq(1);

    return 0;
}
