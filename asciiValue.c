// Write a program in c to take a character from user and show it's ASCII value.

#include<stdio.h>
int main(){
    char character;
    printf("Enter an character : ");
    scanf("%c",&character);
    printf("%c Ascii value is %d",character,character);
    return 0;
}