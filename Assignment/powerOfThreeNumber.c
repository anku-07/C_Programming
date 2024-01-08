//Read integer(n) and print the three powers(n^1,n^2,n^3);
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    int power_1 = n;
    int power_2 = n * n;
    int power_3 = n * n * n;

    printf("%d^1 = %d\n",n,power_1);
    printf("%d^2 = %d\n",n,power_2);
    printf("%d^3 = %d\n",n,power_3);

    return 0;
}