//8. Write a program to compute the sum of all elements in an array using pointers.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    printf("The sum of all elements in the array is: %d\n", sum);
    return 0;
}
