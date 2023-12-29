// Design a function that takes two numbers and an operator (+, -, *, /) as parameters and performs the corresponding operation. Display the result in the main function after taking user input for the numbers and operator.
#include<stdio.h>

int calculator(char opr, int num1, int num2);

int main(){
    char opr;
    int num1,num2;
    printf("Enter operation : ");
    scanf("%c",&opr);
    printf("Enter two number : ");
    scanf("%d %d",&num1,&num2);
    int result = calculator(opr,num1,num2);
    printf("Answer is %d",result);
    return 0;
}

int calculator(char opr, int num1, int num2){
    int result;
    switch (opr)
    {
    case '+':
        return result = num1 + num2;
        break;
    case '-':
        return result = num1 - num2;
        break;
    case '*':
        return result = num1 * num2;
        break;
    case '/':
        return result = num1 / num2;
        break;
    default:printf("Enter valid opertion");
        break;
    }
    return result;
}