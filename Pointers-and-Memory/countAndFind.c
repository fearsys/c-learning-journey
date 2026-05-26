#include <stdio.h>

void countAndFind(
    int *arr,
    int size,
    int target,
    int *count,
    int *firstIndex
);

int main() {
    int nums[] = {5, 7, 12, 7, 20, 7};
    int size = sizeof(nums) / sizeof(nums[0]);

    int count;
    int firstIndex;

    countAndFind(nums, size, 7, &count, &firstIndex);

    printf("Count = %d\n", count);
    printf("First Index = %d\n", firstIndex);

    return 0;
}

void countAndFind(
    int *arr,
    int size,
    int target,
    int *count,
    int *firstIndex
) {
    *count = 0;
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == target) {
            (*count)++;
        }
    }
    *firstIndex = -1;
    for (int i = 0; i < size; i++) {
        if(arr[i] == target) {
            *firstIndex = i;
            break;
        }
    }    
}