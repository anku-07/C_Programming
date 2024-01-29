#include<stdio.h>
int main(){
    int n,i;
    printf("Enter a maximum number of eliment : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter eliment : ");
    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Values are : ");
    for(i = 0; i < n; i++){
        printf(" %d ",arr[i]);
    }
    int count = 0;
    for(i = 0; i < n; i++){
        if(arr[i] % 2 != 0){
            count++;
        }
    }

    printf("\nIn this array have %d odd numbers.",count);
    return 0;
}