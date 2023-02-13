//9. Write a program to print the elements of an array in reverse order.

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

    int *ptr = arr + n - 1;
    printf("The elements of the array in reverse order are: \n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d\n", *(ptr - i));
    }

    return 0;
}
