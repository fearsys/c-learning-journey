#include <stdio.h>

int* firstEvenPtr(int *arr, int size);

int main() {
    int nums[] = {5, 7, 11, 20, 8};
    int size = sizeof(nums) / sizeof(nums[0]);

    int *ptr = firstEvenPtr(nums, size);

    if (ptr != NULL)
        printf("First even = %d\n", *ptr);
    else
        printf("No even number found\n");

    return 0;
}

int* firstEvenPtr(int *arr, int size) {
    int *ptr = arr;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) return ptr;
        ptr++;
    }
    return NULL;
}