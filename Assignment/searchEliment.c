//search element in an array using pointer in c
#include <stdio.h>

// Function to search for an element in the array
int searchElement(int *arr, int size, int key) {
    int found = 0; // Flag to indicate if the element is found
    int index = -1; // Initialize index to -1 (not found)

    for (int i = 0; i < size; i++) {
        if (*arr == key) {
            found = 1; // Element found
            index = i; // Update the index
            break; // Exit the loop once element is found
        }
        arr++; // Move the pointer to the next element
    }

    if (found) {
        return index; // Return the index where the element was found
    } else {
        return -1; // Return -1 if element is not found
    }
}

int main() {
    int n, key;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    printf("Enter %d elements:\n", n);

    // Input array elements using pointers
    for (int *ptr = arr; ptr < arr + n; ptr++) {
        scanf("%d", ptr);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Search for the element in the array
    int index = searchElement(arr, n, key);

    if (index != -1) {
        printf("%d found at index %d\n", key, index);
    } else {
        printf("%d not found in the array\n", key);
    }

    return 0;
}
