#include <stdio.h>

int main() {
    int n, pos, element;

    // Get the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n + 1]; // Extra space for insertion

    // Get the array elements
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the position and element to insert
    printf("Enter the position to insert the element: ");
    scanf("%d", &pos);
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Shift elements to the right
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[pos - 1] = element;

    // Print the updated array
    printf("Updated array:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
