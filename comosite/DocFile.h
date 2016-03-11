#ifndef __DOCFILE__
#define __DOCFILE__

#include "IFile.h"
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class DocFile : public IFile
{
    int value;
public:
    DocFile(int value):value(value) { };
    void Compress()
    {
        printf("Compressing DocFile  value %d .. \n", value);
    }
};

#endif
