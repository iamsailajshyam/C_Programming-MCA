#include <stdio.h>

int main() {
    FILE *file1, *file2, *mergedFile;
    char ch;

    // Open the first file in read mode
    file1 = fopen("file1.txt", "r");
    if (file1 == NULL) {
        printf("First file not found.\n");
        return 1;
    }

    // Open the second file in read mode
    file2 = fopen("file2.txt", "r");
    if (file2 == NULL) {
        printf("Second file not found.\n");
        fclose(file1);
        return 1;
    }

    // Open the merged file in write mode
    mergedFile = fopen("merged.txt", "w");
    if (mergedFile == NULL) {
        printf("Unable to create merged file.\n");
        fclose(file1);
        fclose(file2);
        return 1;
    }

    // Copy contents of the first file to merged file
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, mergedFile);
    }

    // Copy contents of the second file to merged file
    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, mergedFile);
    }

    // Close the files
    fclose(file1);
    fclose(file2);
    fclose(mergedFile);

    printf("Files merged successfully.\n");
    return 0;
}
