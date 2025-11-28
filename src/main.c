#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <stdlib.h>
#include <windows.h>

#include "../include/createfolder.h"
#include "../include/createfile.h"
#include "../include/rename.h"
#include "../include/delete.h"
#include"../include/movefolder.h"
#include "../include/listfiles.h"
#include "../include/path.h"

int main(void)
{
    int choice;

    while (1)
    {
        printf("\n===== FILE SYSTEM CHANGE MAKER =====\n");
        printf("1. Create Folder\n");
        printf("2. Create File\n");
        printf("3. Rename File\n");
        printf("4. Delete File or Folder\n");
        printf("5. List Files in Directory\n");
        printf("6. move the file or folder\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        switch (choice)
        {
        case 1:
            createFolder();
            break;
        case 2:
            createFile();
            break;
        case 3:
            renameFile();
            break;
        case 4:
            deleteFile();
            break;
        case 5:
            listFiles();
            break;
        case 6:
            movefolder();
            break;
        case 7:
            printf("Thankyou");
            return 0;
            break;
        default:
            printf("Invalid choice!\n");
        }
    }
}