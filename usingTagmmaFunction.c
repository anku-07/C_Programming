// Write a c language program to compute following series : G = 1 + x3/3! + x5/5! + x7/7!+...upto n terms.
#include <stdio.h>
#include <math.h>

double computeSeries(int n, double x) {
    double result = 1.0;  // First term of the series

    for (int i = 1; i <= n; i++) {
        int exponent = 2 * i + 1;
        double term = pow(x, exponent) / tgamma(exponent + 1);  // tgamma is the gamma function
        result += term;
    }

    return result;
}

int main() {
    int n;
    double x;

    // Input the number of terms and the value of x
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    // Compute and print the result
    double result = computeSeries(n, x);
    printf("Result of the series G = %.6f\n", result);

    return 0;
}
