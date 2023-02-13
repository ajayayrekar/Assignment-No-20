//3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]

#include <stdio.h>

void sort(int *ptr, int size) {
    int i, j, temp;
    for (i = 0; i < size-1; i++) {
        for (j = i+1; j < size; j++) {
            if (*(ptr+i) > *(ptr+j)) {
                temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;
            }
        }
    }
}

int main() {
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    sort(arr, size);
    printf("Sorted array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
