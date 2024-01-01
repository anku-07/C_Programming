/*
Write a program to find the factorial of a number using a function.
*/
#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Factorial of 0 and 1 is 1
    } else {
        return n * factorial(n - 1); // Recursive call to calculate factorial
    }
}

int main() {
    int number;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial of negative numbers is not defined.\n");
    } else {
        int result = factorial(number);
        printf("Factorial of %d is: %d\n", number, result);
    }

    return 0;
}
