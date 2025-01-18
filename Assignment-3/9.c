#include <stdio.h>

int main() {
    int n, key, found = 0;

    // Get the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Get the array elements
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &key);

    // Search for the element
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }

    // Print result
    if (found) {
        printf("Element found in the array.\n");
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}

