#include<stdio.h>
#include<dirent.h>
#include<direct.h>
#include<string.h>

#include"../include/createfolder.h"
#include"../include/path.h"

void createFolder(void) 
{
    char path[100], folder[50], fullpath[200];
    
    path_of_folder(path);
    fflush(stdin);
    printf("Enter new folder name: ");
    scanf("%s", folder);

    sprintf(fullpath, "%s\\%s", path, folder);


    if (mkdir(fullpath) == 0)
        printf("Folder '%s' created successfully at: %s\n", folder, fullpath);
    else
        printf("Error creating folder.\n");
}