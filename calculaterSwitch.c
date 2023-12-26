// Write a program in c to create a simple calculater using switch case.

#include<stdio.h>
int main(){
    int num1, num2;
    char opr;
    printf("Enter operation (*,/,+,-) : ");
    scanf("%c",&opr);

    printf("Enter two number : \n");
    scanf("%d %d",&num1,&num2);
    switch (opr)
    {
    case '+':printf("Sum is %d + %d = %d",num1,num2,num1+num2);
        break;
    case '-':printf("Sub is %d - %d = %d",num1,num2,num1-num2);
        break;
    case '*':printf("Multiplication is %d * %d = %d",num1,num2,num1*num2);
        break;
    case '/':printf("Division is %d / %d = %d",num1,num2,num1/num2);
        break;
    default:printf("Enter right operation");
        break;
    }
    return 0;
}