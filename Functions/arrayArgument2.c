#include <stdio.h>

void reverseArray(int arr[], int size);
void replaceNegatives(int arr[], int size, int replacement);

int main () {

    int nums[] = {3, -1, 7, -5, 2, -8, 4};
    int size = sizeof(nums) / sizeof(nums[0]);
    replaceNegatives(nums, size, 0);
    printf("After replacing negatives: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    reverseArray(nums, size);
    printf("After reversing:           \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }

    return 0;

}

void replaceNegatives(int arr[], int size, int replacement) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) arr[i] = replacement;
    }
}

void reverseArray(int arr[], int size) {
    int temp = 0;
    for (int i = 0; i < size/2; i++) {
        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
}