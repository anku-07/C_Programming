#include <stdio.h>

void findMinMax(int arr[], int size, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] < *min) {
            *min = arr[i];
        }

        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int size;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare an array of the given size
    int arr[size];

    // Get array elements from the user
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int min, max;
    findMinMax(arr, size, &min, &max);

    printf("\nArray: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    printf("Smallest element: %d\n", min);
    printf("Largest element: %d\n", max);

    return 0;
}
