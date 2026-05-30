#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = malloc(2 * sizeof(int));
    if (arr == NULL) {
        return 1;
    }
    arr[0] = 1; arr[1] = 2;
    int *temp = realloc(arr, 4 * sizeof(int));
    if (temp == NULL) {
        free(arr);
        return 1;
    }
    arr = temp;
    arr[2] = 3; arr[3] = 4;
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    arr = NULL;
    return 0;
}