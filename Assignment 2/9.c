#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int isArmstrong(int n) {
    int sum = 0, temp = n, digits = 0;
    while (temp) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    return sum == n;
}

int isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            sum += i;
    }
    return sum == n;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a Prime number\n", num);
    if (isArmstrong(num))
        printf("%d is an Armstrong number\n", num);
    if (isPerfect(num))
        printf("%d is a Perfect number\n", num);

    return 0;
}
