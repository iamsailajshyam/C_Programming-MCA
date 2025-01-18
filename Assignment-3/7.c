#include <stdio.h>

int main() {
    int n;

    // Get the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int smallest, largest;

    // Get the array elements
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    smallest = largest = arr[0];

    // Find smallest and largest
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Print results
    printf("Smallest element: %d\n", smallest);
    printf("Largest element: %d\n", largest);

    return 0;
}
