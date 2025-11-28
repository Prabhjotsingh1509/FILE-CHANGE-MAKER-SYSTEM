#include<stdio.h>
#include<dirent.h>

#include"../include/listfiles.h"

void listFiles()
{
    char fold[50],path[50];
    DIR *p;
    struct dirent *dir;
    printf("Enter the folder name:");
    scanf("%s",&fold);
    fflush(stdin);
    sprintf(path, "C:\\Users\\Prabhjot Singh\\%s", fold);
    p=opendir(path);
    if (p) 
    {
        printf("\nFiles in '%s':\n", path);
        while ((dir = readdir(p)) != NULL)
            printf("%s\n", dir->d_name);
        closedir(p);
    } else 
    {
        printf("Could not open directory.\n");
    }

}