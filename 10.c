//10. Write a program to print a string in reverse using a pointer

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int n = strlen(str);
    char *ptr = str + n - 1;
    printf("The reverse of the string is: \n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%c", *(ptr - i));
    }

    printf("\n");
    return 0;
}
