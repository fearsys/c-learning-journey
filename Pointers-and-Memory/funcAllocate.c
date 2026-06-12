#include <stdio.h>
#include <stdlib.h>

void createArray(int **pp, int size);

int main() {

    int *arr = NULL;

    createArray(&arr, 6);

    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}

void createArray(int **pp, int size) {
    *pp = malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        (*pp)[i] = 5 * (i + 1);
    }
}