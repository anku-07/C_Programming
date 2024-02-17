#include<stdio.h>
char printString(char arr[]);
int main(){
    char name[] = {'A','D','I','T','Y','A','\0'};
    printString(name);
    return 0;
}
char printString(char arr[]){
    for(int i = 0; arr[i] != '\0'; i++){
        printf("%c",arr[i]);
    }
}