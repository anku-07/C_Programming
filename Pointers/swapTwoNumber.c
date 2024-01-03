// Swap 2 numbers, A & B;
void Swap(int a, int b);
void _swap(int *a, int *b);
#include<stdio.h>
int main(){
    int x = 3, y = 5;
    _swap(&x,&y);
    printf("x = %d & y = %d\n",x,y);
    return 0;
}
// Call by refarence
void _swap(int *a, int *b){
    int p = *a;
    *a = *b;
    *b = p;
}
// Call by value
void Swap(int a, int b){
    int t = a;
    a = b;
    b = t;
    printf("a = %d & b = %d \n",a,b);
}