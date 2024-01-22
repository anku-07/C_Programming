// Write a C program to input n numbers in an array, calculate the sum of all even numbers and all
// odd numbers in the array and print the larger sum.
#include<stdio.h>

int main() {
    int n, i;
    printf("Enter the maximum number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Values are: ");
    for (i = 0; i < n; i++) {
        printf(" %d ", arr[i]);
    }

    int evenSum = 0;
    int oddSum = 0;

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }

    printf("\nEven sum = %d & Odd sum = %d\n", evenSum, oddSum);

    return 0;
}
