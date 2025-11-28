#include<stdio.h>
#include<string.h>
#include<dirent.h>
#include"../include/path.h"

void path_of_folder(char *path)
{
    char fold[50];
    struct dirent *dir;
    printf("Enter the folder path (inside C:\\Users\\Prabhjot Singh\\): ");
    fgets(fold,50,stdin);
    
    fold[strcspn(fold, "\n")] = '\0';

    sprintf(path, "C:\\Users\\Prabhjot Singh\\%s", fold);
    DIR *p=opendir(path);

    if (p == NULL) {
        printf("Could not open directory: %s\n", path);
        return;
    }

    closedir(p);
}