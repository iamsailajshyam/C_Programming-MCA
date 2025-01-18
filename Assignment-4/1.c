#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main() {
    struct dirent *entry;
    DIR *dp;

    // Open the directory
    dp = opendir(".");

    if (dp == NULL) {
        printf("Unable to open the directory.\n");
        return 1;
    }

    // List files and sub-directories
    printf("Files and Sub-Directories:\n");
    while ((entry = readdir(dp)) != NULL) {
        printf("%s\n", entry->d_name);
    }

    // Close the directory
    closedir(dp);

    return 0;
}
