// Implement a program to reverse an array in-place.
#include <stdio.h>

void reverseArray(int arr[], int size) {
    if (size <= 1) {
        // If the array has 0 or 1 element, it is already reversed
        return;
    }

    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements at start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move pointers towards the center
        start++;
        end--;
    }
}

int main() {
    // Example usage:
    int myArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    // Call the function to reverse the array in-place
    reverseArray(myArray, size);

    // Display the reversed array
    printf("Reversed Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    return 0;
}
