#include <stdio.h>
#include <stdlib.h>

int main () {
    int size = 10;
    int *arr = malloc(size * sizeof(int));
    if (arr == NULL) {
        return 1;
    }
    for (int i = 0; i < size; i++) {
        *(arr + i) = (i + 1) * 10;
    }
    for (int i = 0; i < size; i++) {
        printf("Value of arr[%d] = %d\n", i, arr[i]);
    }
    printf("--------------------------------\n");
    int newsize = 20;
    int *temp = realloc(arr, newsize * sizeof(int));
    if (temp == NULL) {
        return 1;
    }
    arr = temp;
    temp = NULL;
    for (int i = size; i < newsize; i++) {
        *(arr + i) = (i + 1) * 10;
    }
    for (int i = size; i < newsize; i++) {
        printf("Value of arr[%d] = %d\n", i, arr[i]);
    }
    free(arr);
    arr = NULL;

    return 0;
}