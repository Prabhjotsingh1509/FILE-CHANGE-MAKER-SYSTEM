#include<stdio.h>
#include<string.h>
#include<dirent.h>
#include<stdlib.h>

#include"../include/path.h"
#include"../include/movefolder.h"

void movefolder(void)
{
    char source_path[200];
    char dest_path[200];
    char item_name[100];

    printf("\n===== MOVE FILE OR FOLDER =====\n");
    path_of_folder(source_path);

    if (strlen(source_path) == 0)
    {
        printf("Invalid source path.\n");
        return;
    }

    printf("Enter the name of the file/folder to move: ");
    fgets(item_name, sizeof(item_name), stdin);
    item_name[strcspn(item_name, "\n")] = '\0';

    char full_source[300];
    sprintf(full_source, "%s\\%s", source_path, item_name);

    printf("\nEnter DESTINATION folder name inside C:\\Users\\Prabhjot Singh\\ :\n");
    path_of_folder(dest_path);

    if (strlen(dest_path) == 0)
    {
        printf("Invalid destination path.\n");
        return;
    }

    char full_dest[300];
    sprintf(full_dest, "%s\\%s", dest_path, item_name);

    if (rename(full_source, full_dest) == 0)
    {
        printf("\nMoved successfully!\n");
        printf("From: %s\n", full_source);
        printf("To:   %s\n", full_dest);
    }
    else
    {
        printf("\nFailed to move.\n");
        perror("Error");
    }
}