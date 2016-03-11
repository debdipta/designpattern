#include <stdio.h>
#include "IStudent.h"
#include "ITrainner.h"
#include "CPPTrainner.h"
#include "StudentOne.h"
#include <vector>
#include <iostream>
#include "StudentTwo.h"

using namespace std;

int main(int argc, char* argv[])
{
    printf("This is visitor design pattern\n");

    IStudent *studentone = new StudentOne(1, 23, -1);
    IStudent *studenttwo = new StudentTwo(2, 23, -2);
    ITrainner *trainerone = new CppTrainner(-1);
    vector<IStudent*> student;
    student.push_back(studentone);
    student.push_back(studenttwo );
    
    for(std::vector<IStudent*>::iterator it = student.begin(); it != student.end(); it++)
    (*it)->accept(trainerone);
    

    return 0;
}
