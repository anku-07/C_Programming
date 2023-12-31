// Declaer a pointer.
#include<stdio.h>
int main(){
    int age = 21;
    int *ptr = &age;
    int _age = *ptr;

    //printf("%d",_age);

    //Printing address
    //printf("%p \n",&age);
    printf("%u \n",&age);
    printf("%u \n",ptr);
    printf("%u \n",&ptr);
    printf("%d \n",*ptr);



    return 0;
}