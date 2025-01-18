#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int lineCount = 0;

    // Open the file in read mode
    file = fopen("file.txt", "r");

    if (file == NULL) {
        printf("File not found.\n");
        return 1;
    }

    // Count the number of lines
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lineCount++;
        }
    }

    // Close the file
    fclose(file);

    printf("Number of lines: %d\n", lineCount);
    return 0;
}
