#include <stdio.h>
#include <stdlib.h>

int main() {
    float *arr = malloc(8 * sizeof(float));
    if (arr == NULL) {
        return 1;
    }
    for (int i = 0; i < 8; i++) {
        arr[i] = (i + 1) * 1.1;
    }
    float *temp = realloc(arr, 4 * sizeof(float));
    if (temp == NULL) {
        return 1;
    }
    arr = temp;
    for (int i = 0; i < 4; i++) {
        printf("%.1f ", arr[i]);
    }

    free(arr);
    arr = NULL;

    return 0;
}