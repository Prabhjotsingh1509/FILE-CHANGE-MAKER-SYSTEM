#include<stdio.h>
#include<string.h>
#include<dirent.h>
#include <sys/stat.h>
#include<windows.h>

#include"../include/delete.h"
#include"../include/path.h"

void deleteFile(void) {

    char path[200];
    char fullpath[200];
    char filename[50];

    struct stat s;
    path_of_folder(path);
    
    printf("Enter filename or foldername to delete: ");
    scanf("%s", filename);
    sprintf(fullpath, "%s\\%s", path, filename);
    if (stat(fullpath, &s) != 0) {
        printf("Error: File or folder does not exist.\n");
        return;
    }


    if (s.st_mode & S_IFDIR) 
    {

        if (rmdir(fullpath) == 0) {
            printf("Folder deleted successfully.\n");
        } else {
            printf("Folder is not empty. Cannot delete with rmdir().\n");
        }

    } else 
    {
        if (remove(fullpath) == 0)
            printf("File deleted successfully.\n");
        else
            printf("Error deleting file.\n");
    }
}

