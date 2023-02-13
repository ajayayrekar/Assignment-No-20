//6. Write a program to calculate the length of the string using a pointer

#include <stdio.h>

int length_of_string(char *ptr) {
    int count = 0;
    while (*ptr != '\0') {
        count++;
        ptr++;
    }
    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int length = length_of_string(str);
    printf("Length of the string: %d\n", length);
    return 0;
}
