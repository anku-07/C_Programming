// Write a program in c to print power of a number.
// #include<stdio.h>
// #include<math.h>
// int main(){

//     double base;
//     int exponant;

//     printf("Enter base : ");
//     scanf("%f",&base);

//     printf("Enter exponant : ");
//     scanf("%d",&exponant);

//     double result = pow(base,exponant);
//     printf("%f",result);

//     return 0;

// }
#include <stdio.h>
#include <math.h>

int main() {
    double base, result;
    int exponent;

    printf("Enter base number: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    result = pow(base, exponent);

    printf("Result: %.2lf\n", result);

    return 0;
}
