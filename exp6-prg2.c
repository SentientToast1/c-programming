#include <stdio.h>

#define MAX_SIZE 100

void multiplyMatrices(int matrixA[][MAX_SIZE], int rowsA, int colsA,
                      int matrixB[][MAX_SIZE], int rowsB, int colsB,
                      int resultMatrix[][MAX_SIZE]) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rowsA, colsA, rowsB, colsB;
    int matrixA[MAX_SIZE][MAX_SIZE];
    int matrixB[MAX_SIZE][MAX_SIZE];
    int resultMatrix[MAX_SIZE][MAX_SIZE];

    printf("Enter dimensions of Matrix A (rows columns): ");
    scanf("%d %d", &rowsA, &colsA);

    printf("Enter dimensions of Matrix B (rows columns): ");
    scanf("%d %d", &rowsB, &colsB);

    if (colsA != rowsB) {
        printf("Error: Matrix multiplication not possible.\n");
        printf("Columns of Matrix A (%d) must equal rows of Matrix B (%d).\n", colsA, rowsB);
        return 1;
    }

    printf("Enter elements of Matrix A (%dx%d):\n", rowsA, colsA);
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Enter elements of Matrix B (%dx%d):\n", rowsB, colsB);
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    multiplyMatrices(matrixA, rowsA, colsA, matrixB, rowsB, colsB, resultMatrix);

    printf("Resultant Matrix (%dx%d):\n", rowsA, colsB);
    displayMatrix(resultMatrix, rowsA, colsB);

    return 0;
}
