/*
Design a program to calculate simple interest based on user-provided principal amount, rate, and time.
*/
#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest;

    // Taking user input for principal amount, rate, and time
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    // Calculating simple interest
    simple_interest = (principal * rate * time) / 100;

    // Displaying the calculated simple interest
    printf("Simple Interest = %.2f\n", simple_interest);

    return 0;
}
