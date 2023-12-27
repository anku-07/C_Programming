// Write a program in c to print Welcome 10 times using loop.
#include<stdio.h>
int main(){
    int num;
    printf("Enter an number : ");
    scanf("%d",&num);
    for(int i = 1; i <= num; i++){
        printf("Welcome \n");
    }
    return 0;
}