/*
Implement a program to reverse a given string.
*/
#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseString(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        // Swap characters at start and end positions
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move start and end pointers inward
        start++;
        end--;
    }
}

int main() {
    char inputString[100];

    printf("Enter a string to reverse: ");
    scanf("%s", inputString);

    printf("Original string: %s\n", inputString);

    // Reverse the string
    reverseString(inputString);

    printf("Reversed string: %s\n", inputString);

    return 0;
}
