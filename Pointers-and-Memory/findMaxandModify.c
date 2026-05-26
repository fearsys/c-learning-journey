#include <stdio.h>

void findMaxAndModify(int *arr, int size, int *maxIndex);

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int nums[] = {5, 12, 7, 20, 9};
    int size = sizeof(nums) / sizeof(nums[0]);

    int maxIndex;

    findMaxAndModify(nums, size, &maxIndex);

    printf("Max Index = %d\n", maxIndex);

    printf("Array: ");
    printArray(nums, size);

    return 0;
}

void findMaxAndModify(int *arr, int size, int *maxIndex) {
    int max = *arr;
    *maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
            *maxIndex = i;
        }
    }
    arr[*maxIndex] *= 2;
}