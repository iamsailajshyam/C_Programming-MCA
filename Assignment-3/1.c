#include <stdio.h>

int main() {
    int n;

    // Get the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    int marks[n];

    // Get the marks for each student
    for (int i = 0; i < n; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Print the marks
    printf("Marks of students:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}
