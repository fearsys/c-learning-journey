#include <stdio.h>

const int* findValue(const int *arr, int size, int target);

int main() {
    int nums[] = {5, 12, 7, 20, 9};
    int size = sizeof(nums) / sizeof(nums[0]);

    const int *ptr = findValue(nums, size, 7);

    if (ptr != NULL)
        printf("Found: %d\n", *ptr);
    else
        printf("Not found\n");

    return 0;
}

const int* findValue(const int *arr, int size, int target) {
    for (int i = 0; i < size; i++) {
        if (*arr == target) return arr;
        arr++;
    }
    return NULL;
}