#include <stdio.h>

int sumArray(const int arr[], int size);
int countAbove(const int arr[], int size, int threshold);

int main () {

    int nums[] = {4, 17, 8, 23, 5, 19, 11, 2};
    int size = sizeof(nums)/ sizeof(nums[0]);
    printf("Sum: %d\n", sumArray(nums, size));
    printf("Count above 10: %d\n", countAbove(nums, size, 10));
    printf("Count above 5: %d\n", countAbove(nums, size, 5));

    return 0;

}

int sumArray(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr +i);
    }
    return sum;
}

int countAbove(const int arr[], int size, int threshold) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > threshold) count++;
    }
    return count;
}