#include <stdio.h>

int sumNaturalNumbers(int n) {
    if (n == 1)
        return 1;
    return n + sumNaturalNumbers(n - 1);
}

int main() {
    printf("Sum of first 20 natural numbers: %d\n", sumNaturalNumbers(20));
    return 0;
}
