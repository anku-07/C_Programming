//Write a program in c to check given year is leap year or not.
#include<stdio.h>
int main(){
    int year;
    printf("Enter an year : ");
    scanf("%d",&year);

    if(((year%4 == 0) || (year%100 != 0)) && (year%400 == 0)){
        printf("%d is a leap year.",year);
    }else{
        printf("%c is not a leap year",year);
    }
    return 0;
}