#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("How many integers to store? \n");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("Input : ");
        scanf ("%d", &arr[i]);
    }
    for (int i = n - 1; i >= 0 ; i--) {
        printf("%d ", arr[i]);
    }
    free(arr);
    arr = NULL;
    return 0;
}