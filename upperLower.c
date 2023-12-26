// Write a program in c to check whether a given character is in uppercase or lowercase or it is a digit.

#include<stdio.h>

int main(){
    char ch;
    printf("Enter : ");
    scanf("%c",&ch);
    if((ch >= 'A') && (ch <= 'Z')){
        printf("%c in uppercase.",ch);
    }else if((ch >= 'a') && (ch <= 'z')){
        printf("%c in lowercase.",ch);
    }else if((ch >= '0') || (ch <= '9')){
        printf("%c in digit.",ch);
    }else{
        printf("%c is not valid.",ch);
    }
    return 0;
}