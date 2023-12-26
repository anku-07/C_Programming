// Write a program in c to swap two numbersusing third veriable.

#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);
    printf("Before swaping number is %d %d \n",num1,num2);
    num3 = num1;
    num1 = num2;
    num2 = num3;
    printf("After swaping number is %d %d",num1,num2);
    return 0;
}