// Write aprogram in c to check number is even or odd?

#include<stdio.h>

int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    if(number%2 == 0){
        printf("%d is a even number.",number);
    }else if(number%2 != 0){
        printf("%d is a odd number.",number);
    }else{
        printf("Plese enter a valid number.");
    }
    return 0;
}