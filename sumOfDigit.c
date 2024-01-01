/*
Develop a program to find the sum of digits of a number recursively.
*/
#include <stdio.h>

// Function to find the sum of digits recursively
int sumOfDigits(int num) {
    if (num == 0) {
        return 0; // Base case: if the number becomes 0, return 0
    } else {
        return (num % 10) + sumOfDigits(num / 10); // Recursive call to sum the digits
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int sum = sumOfDigits(number);

    printf("Sum of digits of %d is: %d\n", number, sum);

    return 0;
}
