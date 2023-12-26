// Write a program in c to convert fahrenheit to celcius.

#include<stdio.h>

int main (){
    float fahrenheit,celcius;
    printf("Enter tempareture in fahrenheit : ");
    scanf("%f",&fahrenheit);

    celcius = (fahrenheit - 32)*5/9;

    printf("%.2f fahrenheit = %.2f celcius.",fahrenheit,celcius);

    return 0;
}