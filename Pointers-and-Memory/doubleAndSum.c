#include <stdio.h>

void doubleAndSum(int *arr, int size, int *sumAfter);

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int nums[] = {5, 12, 7};
    int size = sizeof(nums) / sizeof(nums[0]);

    int sumAfter;

    doubleAndSum(nums, size, &sumAfter);

    printf("Array: ");
    printArray(nums, size);

    printf("Sum = %d\n", sumAfter);

    return 0;
}

void doubleAndSum(int *arr, int size, int *sumAfter) {
    *sumAfter = 0;
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
        *sumAfter += arr[i];
    }
}