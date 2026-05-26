#include <stdio.h>

void minMaxArray(int *arr, int size, int *min, int *max);

int main() {
    int nums[] = {5, 12, 7, 20, 9};
    int size = sizeof(nums) / sizeof(nums[0]);

    int min;
    int max;

    minMaxArray(nums, size, &min, &max);

    printf("Min = %d\n", min);
    printf("Max = %d\n", max);

    return 0;
}

void minMaxArray(int *arr, int size, int *min, int *max) {
    *min = *arr;
    for (int i = 1; i < size; i++) {
        if(arr[i] < *min) *min = arr[i];
    }
    *max = *arr;
    for (int i = 1; i < size; i++) {
        if(arr[i] > *max) *max = arr[i];
    }
}