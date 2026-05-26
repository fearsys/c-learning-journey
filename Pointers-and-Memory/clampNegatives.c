#include <stdio.h>

void clampNegatives(int *arr, int size);

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int nums[] = {5, -3, 7, -10, 9};
    int size = sizeof(nums) / sizeof(nums[0]);

    printf("Before: ");
    printArray(nums, size);

    clampNegatives(nums, size);

    printf("After : ");
    printArray(nums, size);

    return 0;
}

void clampNegatives(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) < 0) *(arr+i) = 0;
    }
}