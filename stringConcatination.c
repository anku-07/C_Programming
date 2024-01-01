/*
Create a program that concatenates two strings without using library functions.
*/
#include <stdio.h>

// Function to concatenate two strings
void concatenateStrings(char str1[], char str2[]) {
    int i, j;

    // Finding the length of the first string
    for (i = 0; str1[i] != '\0'; i++);

    // Concatenating the second string to the first
    for (j = 0; str2[j] != '\0'; j++) {
        str1[i + j] = str2[j];
    }

    str1[i + j] = '\0'; // Adding null character to mark the end of the concatenated string
}

int main() {
    char string1[100], string2[100];

    printf("Enter the first string: ");
    scanf("%s", string1);

    printf("Enter the second string: ");
    scanf("%s", string2);

    concatenateStrings(string1, string2);

    printf("Concatenated string: %s\n", string1);

    return 0;
}
