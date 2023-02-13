//4. Write a program in C to demonstrate how to handle the pointers in the program.

#include <stdio.h>

int main() {
    int num = 5;
    int *ptr;
    ptr = &num;
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr: %p\n", ptr);
    printf("Value stored in ptr: %d\n", *ptr);
    *ptr = 10;
    printf("Value of num after updating: %d\n", num);
    return 0;
}
