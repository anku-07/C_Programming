#include<stdio.h>
char printString(char arr[]);
int main(){
    char fname[] = {'A','D','I','T','Y','A','\0'};
    char lname[] = "MONDAl";
    printf("Your name is %s %s",fname,lname);
    // printString(fname);
    // printString(lname);
    return 0;
}
char printString(char arr[]){
    for(int i = 0; arr[i] != '\0'; i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}