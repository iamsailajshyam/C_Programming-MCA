// Find the Maximum Between Two Numbers
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
        printf("%d is the maximum number.\n", num1);
    else
        printf("%d is the maximum number.\n", num2);

    return 0;
}
