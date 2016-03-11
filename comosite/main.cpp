#include <stdio.h>
#include "IFile.h"
#include "DocFile.h"
#include "ZippableObject.h"
#include "Folder.h"


int main(int argc, char* argv[])
{
    printf("Simple Zip Program\n");
    IFile *file1 = new DocFile(1);
    IFile *file2 = new DocFile(2);
    IFile *file3 = new DocFile(3);
    IFile *file4 = new DocFile(4);
    IFile *file5 = new DocFile(5);
    IFile *file6 = new DocFile(6);

    Folder* folder1 = new Folder(10);
    Folder* folder2 = new Folder(20);

    folder1->add(file1);
    folder1->add(file2);
    folder1->add(file3);
    folder1->add(file4);
    folder2->add(folder1);

    folder2->Compress();

    return 0;
}
