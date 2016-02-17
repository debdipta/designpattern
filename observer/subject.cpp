#include "subject.h"

subject::subject()
{
}

subject::~subject()
{

}

void subject::attach(observer* _observer)
{
    list_observer.push_back(_observer);
}

void subject::detach(observer* _observer)
{
    list_observer.remove(_observer);
}

void subject::notify()
{
    list<observer*>::iterator it;
    for(it = list_observer.begin(); it != list_observer.end(); it++)
    {
        (*it)->update(this);
    }
}
