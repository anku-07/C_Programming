// Write a program in c to check whether a given character is divisiable by 5 and 11 or not.

#include<stdio.h>
int main(){
    int num;

    printf("Enter a number : ");
    scanf("%d",&num);

    if((num%5 == 0) && (num%11 == 0)){
        printf("%d is divisiable by 5 and 11",num);
    }else{
        printf("%d is not divisiable by 5 and 11",num);
    }
    return 0;
}