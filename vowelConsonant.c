// Write a program in c to check whether a given character is vowel or consonant.

#include<stdio.h>
int main(){
    char character;
    printf("Enter an character to check vowel or consonant : ");
    scanf("%c",&character);

    if(character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' || character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U'){
        printf("%c is Vowel",character);
    }else{
        printf("%c is consonant",character);
    }
    return 0;
}