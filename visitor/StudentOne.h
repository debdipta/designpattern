#ifndef __STUDENTONE__
#define __STUDENTONE__

class StudentOne : public IStudent
{
   int secret_state; 
   int trust;
   int id;
public:
    StudentOne(int id, int state, int trust):secret_state(state),trust(trust), id(id){};
    void accept( ITrainner* trainner)
    {
        if(trainner->getSpecialID() == trust)
            trainner->MakeChange(this);
    }
    void SetState(int state)
    {
        secret_state = state;
        printf("Student with ID %d now have state %d\n", id, secret_state);
    }
};

#endif
