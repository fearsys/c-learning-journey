#include <stdio.h>

int maxArray(int *arr, int size);

int main() {
    int nums[] = {5, 12, 7, 20, 9};
    int size = sizeof(nums) / sizeof(nums[0]);

    int max = maxArray(nums, size);

    printf("Max = %d\n", max);

    return 0;
}

int maxArray(int *arr, int size) {
    int max = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr+i) > max) max = *(arr+i);
    }
    return max;
}