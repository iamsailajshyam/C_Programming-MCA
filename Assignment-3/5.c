#include <stdio.h>

int main() {
    int n, i = 0;
    int bin[32];

    // Get decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    // Convert to binary
    while (n > 0) {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Print binary number
    printf("Binary number: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }

    return 0;
}
