#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = calloc(6, sizeof(int));
    if (arr == NULL) {
        return 1;
    }
    printf("Before: \n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(int i = 0; i < 6; i++) {
        arr[i] = i * 5;
    }
    printf("After: \n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    free(arr);
    arr = NULL;
    return 0;
}