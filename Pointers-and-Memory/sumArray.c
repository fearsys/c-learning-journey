#include <stdio.h>

int sumArray(int *arr, int size);

int main() {
    int nums[] = {5, 12, 7, 20, 9};
    int size = sizeof(nums) / sizeof(nums[0]);

    int sum = sumArray(nums, size);

    printf("Sum = %d\n", sum);

    return 0;
}

int sumArray(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}