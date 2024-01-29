#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5};
    // a. *(arr + 2) --> output? ---> Ans is : 3
    // b. *(arr + 5) --> output? ---> Ans is : memory location

    printf("%d \n",*(arr+2));
    printf("%d \n",*(arr+5));
    return 0;
}