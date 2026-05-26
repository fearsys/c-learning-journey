#include <stdio.h>

int* findMaxPtr(int *arr, int size);

int main() {
    int nums[] = {5, 12, 7, 20, 9};
    int size = sizeof(nums) / sizeof(nums[0]);

    int *maxPtr = findMaxPtr(nums, size);

    printf("Max value = %d\n", *maxPtr);

    return 0;
}

int* findMaxPtr(int *arr, int size) {
    int *max = arr;
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) max = &arr[i];
    }
    return max;
}