// Write a program in c to print all odd number upto a range;
#include<stdio.h>
int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    int i =1;
    while (i <= number)
    {
        printf("%d\n",i);
        i = i+2;
    }
    
    return 0;
}