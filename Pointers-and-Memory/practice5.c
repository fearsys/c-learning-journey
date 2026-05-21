#include <stdio.h>

void doubleAll(int arr[], int size);

int main() {
    int nums[4] = {3, 7, 2, 9};
    int size = sizeof(nums) / sizeof(nums[0]);

    printf("Before: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    doubleAll(nums, size);

    printf("After:  ");
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
void doubleAll(int arr[], int size) {
    int *p = arr;
    int *end = arr + size;
    while (p < end) {
        *p *= 2;
        p++;
    }
}