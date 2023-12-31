/*
Write a C program that declares an integer variable, initializes it with a value, creates a pointer to that integer, assigns the address of the integer variable to the pointer, and then prints both the value of the integer variable and the value pointed to by the pointer.
*/
#include<stdio.h>
int main(){
int num = 2024;
int *ptr = &num;
printf("num = %d\n",num);
printf("*ptr = %d",*ptr);
    return 0;
}