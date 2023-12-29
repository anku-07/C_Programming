// Write a program in c to print given number is palindrome or not.
#include<stdio.h>
int main(){
    int number,revNum = 0, rem,orginalNumber;
    printf("Enter a number to check number is palindrome or not : ");
    scanf("%d",&number);

    orginalNumber = number;

    while (number != 0)
    {
        rem = number % 10;
        revNum = (revNum *10)+rem;
        number /= 10;
    }
    
    //printf("");

    if(orginalNumber == revNum){
        printf("Number is palindrome.");
    }else{
        printf("Number is not palindrome");
    }
    return 0;
}