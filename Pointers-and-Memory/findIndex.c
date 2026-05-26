#include <stdio.h>

int findIndex(int *arr, int size, int target);

int main() {
    int nums[] = {5, 12, 7, 20, 9};
    int size = sizeof(nums) / sizeof(nums[0]);

    int target = 7;

    int index = findIndex(nums, size, target);

    printf("Index = %d\n", index);

    return 0;
}

int findIndex(int *arr, int size, int target) {
    for(int i = 0; i < size; i++) {
        if (*(arr + i) == target) return i;
    }
    return -1;
}