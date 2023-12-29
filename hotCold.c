// Write a function to print 'hot' or 'cold' depends on the tempareture user enters.

int tempCondition(int n){
    if(n >= 20 && n <= 35){
        printf("Weather is normal.");
    }else if( n >=10 && n <= 19){
        printf("Weather is cold");
    }else if(n < 9){
        printf("Weather is so cold");
    }else if(n >= 36){
        printf("Weather is so hot");
    }
    return n;
}

#include<stdio.h>
int main(){
    int tem;
    printf("Enter tempareture in celsius and see what is the weather condition : ");
    scanf("%d",&tem);
    tempCondition(tem);
    return 0;
}