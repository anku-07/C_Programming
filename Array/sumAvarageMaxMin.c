#include<stdio.h>
int main(){
    int i,n;
    printf("Enter maximum number of eliment : ");
    scanf("%d",&n);
    int arr[n];
    for(i = 0; i < n; i++){
        printf("Enter eliment  %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("The values are : ");
        for(i = 0; i < n; i++){
        printf("  %d  ",arr[i]);;
    }
    int min = arr[0];
    int max = arr[0];
    for(i =0 ; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
        for(i =0 ; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    int sum = 0;
        for(i =0 ; i < n; i++){
            sum += arr[i];
    }
    int avg = sum /n;
    printf("\nSmall is %d maximum is %d sum of eliment is %d and avarage is %d",min,max,sum,avg);
}