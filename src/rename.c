#include<stdio.h>
#include<string.h>
#include<dirent.h>

#include"../include/rename.h"
#include"../include/path.h"

void renameFile(void) 
{
    char path[50];
    char filename[100];
    char oldpath[200],newpath[200];
    char oldname[100], newname[100];

    path_of_folder(path);
    
    printf("Enter old filename: ");
    fgets(oldname,100,stdin);
    oldname[strcspn(oldname, "\n")] = '\0';

    fflush(stdin);
    printf("Enter new filename: ");
    fgets(newname,100,stdin);
    newname[strcspn(newname, "\n")] = '\0';

    sprintf(oldpath,"%s\\%s",path,oldname);
    sprintf(newpath,"%s\\%s",path,newname);

    if (rename(oldpath, newpath) == 0)
        printf("File renamed successfully.\n");
    else
        printf("Error renaming file.\n");
}