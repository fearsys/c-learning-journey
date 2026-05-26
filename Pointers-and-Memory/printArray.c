#include <stdio.h>

void printArray(int *arr, int size);

int main() {
    int nums[] = {5, 12, 7, 20, 9};
    int size = sizeof(nums) / sizeof(nums[0]);

    printf("Array: ");
    printArray(nums, size);
    printf("\n");

    return 0;
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
}