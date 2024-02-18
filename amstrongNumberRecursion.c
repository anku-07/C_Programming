#include<stdio.h>

int reverse(int num,int rev){
    if(num == 0){
        return rev;
    }else{
        rev = rev * 10 + num % 10;
        return reverse(num/10,rev);
    }
    
}

int isPalindrome(int num){
    int reversed = reverse(num,0);
    return reversed == num;
}

int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    
    if(isPalindrome(number)){
        printf("%d an palindrome number",number);
    }else{
        printf("%d not palindrome",number);
    }
    return 0;
}