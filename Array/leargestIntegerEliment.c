//Develop a program that finds the largest element in an array of integers.
// #include<stdio.h>
// int main(){
// int arr[5] = {12,32,34,30,20};
// int i,max = a[0];
// for(i = 0; i < 5; i++){
//     if(arr[i] > max){
//         max = arr[i];
//     }
// }
// printf("maximum value is %d",max);
//     return 0;
// }
#include <stdio.h>

int findLargest(int arr[], int size) {
    int max = arr[0]; // Assuming the first element is the largest initially

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if a larger element is found
        }
    }

    return max;
}

int main() {
    int arr[] = {10, 23, 5, 17, 8, 14};
    int size = sizeof(arr) / sizeof(arr[0]);

    int largest = findLargest(arr, size);
    
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}

