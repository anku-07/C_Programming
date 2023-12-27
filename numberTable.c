// Write a program in c to print number table of n number.
#include<stdio.h>
int main(){
    int num,i;
    printf("Enter a number : ");
    scanf("%d",&num);

    for(i = 1; i <= 10; i++){
        printf("%d \n" ,i*num);
    }
    return 0;
}