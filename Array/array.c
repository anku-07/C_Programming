// Example program.
#include<stdio.h>
int main(){
    int marks[3];
    
    printf("Enter number phy : ");
    scanf("%d",&marks[0]);

    printf("Enter number chim : ");
    scanf("%d",&marks[1]);

    printf("Enter number math : ");
    scanf("%d",&marks[2]);

    printf("phy = %d, chem = %d, math = %d",marks[0],marks[1],marks[2]);
    
    return 0;
}