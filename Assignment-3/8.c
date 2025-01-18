#include <stdio.h>

int main() {
    int n;

    // Get the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], temp[n], k = 0;

    // Get the array elements
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Remove duplicates
    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i] == temp[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            temp[k++] = arr[i];
        }
    }

    // Print the updated array
    printf("Array without duplicates:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}
