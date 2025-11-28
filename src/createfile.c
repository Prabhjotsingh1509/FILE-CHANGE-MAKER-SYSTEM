#include<stdio.h>
#include<direct.h>
#include<dirent.h>

#include"../include/createfile.h"
#include"../include/path.h"

void createFile(void) {
    char path[200];
    char filename[50];
    char fullpath[200];

    path_of_folder(path);

    FILE *fp;
    printf("Enter filename: ");
    scanf("%s", filename);

    sprintf(fullpath,"%s\\%s",path,filename);
    fp = fopen(fullpath, "w");
    if (fp == NULL)
        printf("Error creating file.\n");
    else {
        printf("File '%s' created successfully.\n", filename);
        fclose(fp);
    }
}