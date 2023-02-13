/*7. Write a program to count the number of vowels and consonants in a string using a
pointer.*/

#include <stdio.h>

int count_vowels_and_consonants(char *ptr) {
    int vowels = 0, consonants = 0;
    while (*ptr != '\0') {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' || *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U') {
            vowels++;
        } else {
            consonants++;
        }
        ptr++;
    }
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    count_vowels_and_consonants(str);
    return 0;
}
