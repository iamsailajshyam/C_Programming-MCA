#include <stdio.h>

int main() {
    FILE *source, *destination;
    char ch;

    // Open source file in read mode
    source = fopen("source.txt", "r");
    if (source == NULL) {
        printf("Source file not found.\n");
        return 1;
    }

    // Open destination file in write mode
    destination = fopen("destination.txt", "w");
    if (destination == NULL) {
        printf("Unable to create destination file.\n");
        fclose(source);
        return 1;
    }

    // Copy contents from source to destination
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    // Close the files
    fclose(source);
    fclose(destination);

    printf("File copied successfully.\n");
    return 0;
}
