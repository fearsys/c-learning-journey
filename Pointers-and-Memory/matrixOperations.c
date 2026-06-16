#include <stdio.h>
#include <stdlib.h>

int **buildMatrix(int rows, int cols);
void printMatrix(int **matrix, int rows, int cols);
void transposeMatrix(int **src, int **dst, int rows, int cols);
void freeMatrix(int **matrix, int rows);

int main() {

    int rows = 3;
    int cols = 4;

    int **original = buildMatrix(rows, cols);

    printf("Original (%dx%d):\n", rows, cols);
    printMatrix(original, rows, cols);

    int **transposed = buildMatrix(cols, rows);

    transposeMatrix(original, transposed, rows, cols);

    printf("\nTransposed (%dx%d):\n", cols, rows);
    printMatrix(transposed, cols, rows);

    freeMatrix(original, rows);
    freeMatrix(transposed, cols);

    return 0;
}

int **buildMatrix(int rows, int cols) {

    int **matrix = malloc(rows * sizeof(int *));
    if (matrix == NULL) {
        return NULL;
    }
    for (int i = 0; i < rows; i++) {
        matrix[i] = malloc(cols * sizeof(int));
        if (matrix[i] == NULL) {
            for (int k = 0; k < i; k++) {
                free(matrix[k]);
            }
            free(matrix);
            return NULL;
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = i * cols + j;
        }
    }
    return matrix;
}

void printMatrix(int **matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int **src, int **dst, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            dst[j][i] = src[i][j];
        }
    }
}

void freeMatrix(int **matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}