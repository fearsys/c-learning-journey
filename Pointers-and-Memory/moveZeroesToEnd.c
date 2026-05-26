#include <stdio.h>

void moveZeroesToEnd(int *arr, int size);

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int nums[] = {0, 5, 0, 12, 7, 0, 20};
    int size = sizeof(nums) / sizeof(nums[0]);

    printf("Before: ");
    printArray(nums, size);

    moveZeroesToEnd(nums, size);

    printf("After : ");
    printArray(nums, size);

    return 0;
}

void moveZeroesToEnd(int *arr, int size) {
    int *write = arr;
    int *end = arr + size - 1;
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == 0) continue;
            *write = *(arr + i);
            write++;
        
    }
    while (write <= end) {
        *write = 0;
        write++;
    }
}