// Write a C program to check if a given number is Armstrong or not?
#include<stdio.h>
#include<math.h>
int countDigit(int num){
    int count = 0;
    while (num != 0)
    {
        num = num % 10;
        ++count;
    }
    return count;
}

int isAmstrong(int num){
    int orginalNumber = num;
    int numDigits = countDigit(num);
    int sum = 0;
    while (num != 0)
    {
        int digit = num % 10;
        sum += pow(digit,numDigits);
        num /= 10;
    }
    return (orginalNumber == num);
}
int main(){
    int number;
    printf("Enter number : ");
    scanf("%d",&number);
    if (isAmstrong(number))
    {
        printf("%d is an amstrong number.\n",number);
    }else{
        printf("%d is not an amstrong number.\n",number);
    }
    
    return 0;
}