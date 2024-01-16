#include<stdio.h>
int main(){
    int n,i;
    
    printf("Enter number of digit : ");
    scanf("%d",&n);
    
    int arr[n];
    for(i = 0; i < n ; i++){
        printf("Eliment %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("Eliments are : ");
    for(i = 0; i < n; i++){
        printf(" %d ",arr[i]);
    }
    return 0;
}