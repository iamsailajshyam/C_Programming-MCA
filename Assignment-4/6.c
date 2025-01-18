#include <stdio.h>
#include <stdlib.h>

int main() {
    // Delete the file
    if (remove("file.txt") == 0) {
        printf("File deleted successfully.\n");
    } else {
        printf("Unable to delete the file.\n");
    }

    return 0;
}
