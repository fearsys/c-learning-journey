#include <stdio.h>

int* findMin(int arr[], int size);

int main () {

    int num[] = {34, 7, 23, 32, 5, 62};
    int size = sizeof(num)/ sizeof(num[0]);
    printf("Minimum value: %d\n", *(findMin(num, size)));
    return 0;
}

int* findMin(int arr[], int size) {
    int *min = &arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            min = &arr[i];
        }
    }
    return min;
}