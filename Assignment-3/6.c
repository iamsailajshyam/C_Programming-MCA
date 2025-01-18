#include <stdio.h>
#include <math.h>

int main() {
    int n;

    // Get the size of the binary number array
    printf("Enter the number of bits in the binary number: ");
    scanf("%d", &n);

    int bin[n];
    int decimal = 0;

    // Get the binary number
    printf("Enter the binary number:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &bin[i]);
    }

    // Convert to decimal
    for (int i = 0; i < n; i++) {
        decimal += bin[i] * pow(2, n - i - 1);
    }

    // Print decimal number
    printf("Decimal number: %d\n", decimal);

    return 0;
}
