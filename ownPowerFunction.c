// Make Own power function.
#include <stdio.h>

double customPow(double base, int exponent) {
    double result = 1.0;

    if (exponent >= 0) {
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
    } else {
        // Handling negative exponents by taking the reciprocal
        for (int i = 0; i < -exponent; i++) {
            result *= (1.0 / base);
        }
    }

    return result;
}

int main() {
    double base;
    int exponent;

    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    double result = customPow(base, exponent);
    printf("%.2f raised to the power of %d is: %.6f\n", base, exponent, result);

    return 0;
}
