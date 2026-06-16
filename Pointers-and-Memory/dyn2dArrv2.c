#include <stdio.h>
#include <stdlib.h>

int **allocateMatrix(int rows, int cols);
void freeMatrix(int **matrix, int rows);

int main() {

    int rows = 3;
    int cols = 4;

    int **matrix = allocateMatrix(rows, cols);

    if (matrix == NULL) {
        printf("Allocation failed\n");
        return 1;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = i + j;
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }

    freeMatrix(matrix, rows);

    return 0;
}

int **allocateMatrix(int rows, int cols) {
    int **pointer = malloc(rows * sizeof(int *));
    if (pointer == NULL) {
        return NULL;
    }
    for (int i = 0; i < rows; i++) {
        pointer[i] = malloc(cols * sizeof(int));
        if (pointer [i] == NULL) {
            for (int j = 0; j < i; j++) {
                free(pointer[j]);
            }
            free(pointer);
            return NULL;
        }
    }
    return pointer;
}

void freeMatrix(int **matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}