#include <stdio.h>
#include <math.h>
#include <limits.h>

float standardDeviation(const int arr[], int size);
void normalize(int arr[], int size, int *min, int *max);

int main () {

    int nums[] = {10, 20, 30, 40, 50};
    int size = sizeof(nums)/ sizeof(nums[0]);
    printf("%.2f\n", standardDeviation(nums,size ));
    int min = INT_MAX; int max = INT_MIN;
    normalize(nums, size, &min, &max);
    printf("Original min: %d, max: %d\n", min, max);
    printf("Normalized: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
float standardDeviation(const int arr[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    float mean = sum / size;
    float sum2 = 0;
    for (int i = 0; i < size; i++) {
        sum2 += (arr[i] - mean) * (arr[i] - mean);
    }
    return (sum2 / size);
}

void normalize(int arr[], int size, int *min, int *max) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < *min) *min = arr[i];
    }
    for (int i = 0; i < size; i++) {
        if (arr[i] > *max) *max = arr[i];
    }
    for (int i = 0; i < size; i++) {
        arr[i] = (arr[i] - *min) * 100 / (*max - *min);
    }
}