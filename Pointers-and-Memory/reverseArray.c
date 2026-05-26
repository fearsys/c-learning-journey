#include <stdio.h>

void reverseArray(int *arr, int size);

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

    reverseArray(nums, size);

    printf("After : ");
    printArray(nums, size);

    return 0;
}

void reverseArray(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}