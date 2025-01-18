#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    // Open the file in read mode
    file = fopen("file.txt", "r");

    if (file == NULL) {
        printf("File not found.\n");
        return 1;
    }

    // Print the contents of the file
    printf("File contents:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);

    return 0;
}
