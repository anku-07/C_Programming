// Fibonacci series using loop
#include<stdio.h>
int main(){
    int fib,num1 = 0,num2 = 1,next;
    printf("Enter fibonacci number : ");
    scanf("%d",&fib);
    int i;
    for(i = 1; i <= fib; i++){
        printf("%d \n",num1);
        next = num1 + num2;
        num1 = num2;
        num2 = next;
    }
    return 0;
}