// input and print array elements using pointer in c
#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    printf("Enter %d elements:\n", n);

    // Input array elements using pointers
    for (int *ptr = arr; ptr < arr + n; ptr++) {
        scanf("%d", ptr);
    }

    printf("Elements in the array are: ");

    // Print array elements using pointers
    for (int *ptr = arr; ptr < arr + n; ptr++) {
        printf("%d ", *ptr);
    }
    printf("\n");

    return 0;
}
