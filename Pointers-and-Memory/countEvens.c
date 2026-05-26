#include <stdio.h>

int countEvens(int *arr, int size);

int main() {
    int nums[] = {5, 12, 7, 20, 9};
    int size = sizeof(nums) / sizeof(nums[0]);

    int count = countEvens(nums, size);

    printf("Even Count = %d\n", count);

    return 0;
}

int countEvens(int *arr, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (*(arr + i) % 2 == 0) count++; 
    }
    return count;
}