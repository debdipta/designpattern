#include <stdio.h>
#include "CHandlerOne.h"
#include "CHandlerTwo.h"
#include "IHandler.h"
#include "CHandlerThree.h"
#include "CHandlerFour.h"
#include "CHandlerFive.h"

int main(int argc, char* argv[])
{
    printf("Implenentation of Chain of responsibility...\n");
    IHandler* handone = new CHandlerOne(1);
    IHandler* handtwo= new CHandlerTwo(2);
    IHandler* handthree = new CHandlerThree(3);
    IHandler* handfour = new CHandlerFour(4);
    IHandler* handfive = new CHandlerFive(5);
    
    printf("-------------------\n");
    handone->AddHandler(handtwo);
    handtwo->AddHandler(handthree);
    handthree->AddHandler(handfour);
    handfour->AddHandler(handfive);
    handone->HandleRequest(5);


    printf("-------------------\n");

    handthree->HandleRequest(5);
    return 0;
}
