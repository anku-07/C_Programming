//Write a C function for the following problem: Given a positive integer n, print the binary representation of n.

#include <stdio.h>

// Function to print binary representation of a positive integer
void printBinary(int n) {
    if (n > 0) {
        // Recursive call to print binary representation
        printBinary(n / 2);

        // Print the binary digit
        printf("%d", n % 2);
    }
}

int main() {
    int n;

    // Get the positive integer 'n' from the user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
    } else {
        // Display binary representation
        printf("Binary representation of %d: ", n);
        printBinary(n);
        printf("\n");
    }

    return 0;
}
