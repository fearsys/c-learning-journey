#include <stdio.h>

void rotateLeft(int *arr, int size);

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int nums[] = {5, 12, 7, 20, 9};
    int size = sizeof(nums) / sizeof(nums[0]);

    printf("Before: ");
    printArray(nums, size);

    rotateLeft(nums, size);

    printf("After : ");
    printArray(nums, size);

    return 0;
}

void rotateLeft(int *arr, int size) {
    int start = *arr;
    int *end = arr + size - 1;
    for (int i = 0; i < size - 1; i++) {
        *(arr+i) = *(arr+i+1);
    }
    *end = start;
   
}