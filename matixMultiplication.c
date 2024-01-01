/*
 Write a C program to multiply two matrices and display the resultant matrix.
*/
#include <stdio.h>

#define MAX_SIZE 10 // Define maximum size for matrices

// Function to multiply two matrices
void multiplyMatrices(int rows1, int cols1, int matrix1[][MAX_SIZE], int rows2, int cols2, int matrix2[][MAX_SIZE], int result[][MAX_SIZE]) {
    if (cols1 != rows2) {
        printf("Matrices cannot be multiplied. Columns of matrix1 must be equal to rows of matrix2.\n");
        return;
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0; // Initialize each element of the resultant matrix to 0
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j]; // Matrix multiplication
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int rows, int cols, int matrix[][MAX_SIZE]) {
    printf("Resultant Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows and columns for matrix 1: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter elements of matrix 1:\n");
    int matrix1[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the number of rows and columns for matrix 2: ");
    scanf("%d %d", &rows2, &cols2);

    printf("Enter elements of matrix 2:\n");
    int matrix2[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    if (cols1 != rows2) {
        printf("Matrices cannot be multiplied. Columns of matrix1 must be equal to rows of matrix2.\n");
        return 1;
    }

    int result[MAX_SIZE][MAX_SIZE];

    // Multiply matrices
    multiplyMatrices(rows1, cols1, matrix1, rows2, cols2, matrix2, result);

    // Display the resultant matrix
    displayMatrix(rows1, cols2, result);

    return 0;
}

