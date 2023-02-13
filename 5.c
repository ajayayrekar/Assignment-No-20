//5. Write a program to find the maximum number between two numbers using a pointer

#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1, *ptr2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    ptr1 = &num1;
    ptr2 = &num2;
    if (*ptr1 > *ptr2) {
        printf("Maximum number is: %d\n", *ptr1);
    } else {
        printf("Maximum number is: %d\n", *ptr2);
    }
    return 0;
}
