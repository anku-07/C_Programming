// Swap 2 numbers, A & B;
void Swap(int a, int b);

#include<stdio.h>
int main(){
    int x = 3, y = 5;
    Swap(x,y);
    printf("x = %d & y = %d\n",x,y);
    return 0;
}
void Swap(int a, int b){
    int t = a;
    a = b;
    b = t;
    printf("a = %d & b = %d \n",a,b);
}