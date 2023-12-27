// Write a prorgam in c to calculate factorial number.
#include<stdio.h>
int main(){
    int num,fact = 1;
    printf("Enter a number : ");
    scanf("%d",&num);
    int i;
    for(i = 1; i <= num; i++){
        fact *= i;
    }
    printf("%d factorial is %d",num,fact);
    return 0;
}