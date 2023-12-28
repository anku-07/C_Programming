// Write a function to convert celsius to fahrenheit.
#include<stdio.h>
float convertTem(float celsius);

int main(){
    float far = convertTem(40);
    printf("Fahrenheit : %f",far);
    return 0;
}

float convertTem(float celsius){
    float far = celsius * (9.0/5.0) + 32;
    return far;
}