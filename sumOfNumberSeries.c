// Write a C program to display and find the sum of the series 1+11+111+....111 upto n. For eg. if n=4, the series is : 1+11+111+1111. Take the value of 'n' as input from the user.
#include<stdio.h>
int main(){
    int i,n,temp = 0,sum = 0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i = 1; i <= n; i++){
        temp = (temp * 10) + 1;
        sum += temp;
        printf("%d",temp);
        if(i < n){
            printf(" + ");
        }
    }
    printf("\n Sum of the series : %d",sum);
    return 0;
}
