#include <stdio.h>
#include <stdlib.h>

int main() {

    int rows = 4;
    int cols = 5;

    int **matrix = malloc(rows * sizeof(int *));
    if (matrix == NULL) {
        return 1;
    }
    for (int i = 0; i < rows; i++) {
        matrix[i] = malloc(cols * sizeof(int));
        if (matrix[i] == NULL) { // what if ? matrix 0 and 1 are allocated but matrix[2] fails then memory leak will happen. I will fix this upcoming exercises
            free(matrix);
            return 1;
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = (i + 1) * (j + 1);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}