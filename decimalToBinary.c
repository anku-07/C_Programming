/*
Develop a program to convert a decimal number to binary.
*/
#include <stdio.h>

// Function to convert decimal to binary recursively
void decimalToBinary(int n) {
    if (n > 1) {
        decimalToBinary(n / 2); // Recursive call with quotient
    }
    printf("%d", n % 2); // Print remainder (binary digit)
}

int main() {
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    printf("Binary equivalent: ");
    
    if (decimalNumber < 0) {
        printf("Binary representation of negative numbers is not supported.\n");
    } else if (decimalNumber == 0) {
        printf("0\n");
    } else {
        decimalToBinary(decimalNumber);
        printf("\n");
    }

    return 0;
}
