// Write a program in c to print sum of natural number.
#include<stdio.h>
int main(){
    int num,sum = 0;
    printf("Enter a number : ");
    scanf("%d",&num);
    int i;
    for(i = 1; i <= num; i++){
        sum += i;
    }
    printf("Sum of natural number is : %d",sum);
    return 0;
}