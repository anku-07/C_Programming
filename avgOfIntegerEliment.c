#include <stdio.h>

double calculateAverage(int arr[], int size) {
    if (size <= 0) {
        // Handle the case where the array is empty or has a non-positive size
        printf("Error: Array size must be greater than 0.\n");
        return 0.0;
    }

    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    // Calculate the average
    double average = (double)sum / size;

    return average;
}

int main() {
    // Example usage:
    int myArray[] = {5, 10, 15, 20, 25};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    // Call the function to calculate the average
    double result = calculateAverage(myArray, size);

    // Display the result
    printf("Average: %.2f\n", result);

    return 0;
}
