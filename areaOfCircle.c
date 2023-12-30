// Write a program in c to calculate area of circle.
#include<stdio.h>
int main(){
    float pi,r,circle;
    pi = 3.14;
    printf("Enter radius : ");
    scanf("%f",&r);
    circle = pi * r * r;
    printf("Area of circle is %.2f",circle);
    return 0;
}