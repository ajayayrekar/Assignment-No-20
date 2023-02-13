//2. Write a c program  function to swap strings of two char arrays of calling functions. (TSRS)

#include <stdio.h>
#include <string.h>

void swap_strings(char *str1, char *str2) {
    char temp[100];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    printf("Before swapping: str1 = %s, str2 = %s\n", str1, str2);
    swap_strings(str1, str2);
    printf("After swapping: str1 = %s, str2 = %s\n", str1, str2);
    return 0;
}
