#include <stdio.h>

int sumArray(int arr[], int size);
void reverseArray(int arr[], int size);
void printArray(int arr[], int size);

int main() {
    int data[6] = {4, 8, 15, 16, 23, 42};
    int size = sizeof(data) / sizeof(data[0]);

    printf("Original:  "); 
    printArray(data, 6);
    printf("Sum: %d\n", sumArray(data, 6));
    reverseArray(data, 6);
    printf("Reversed:  "); 
    printArray(data, 6);

    return 0;
}

int sumArray(int arr[], int size) {
    int *end = arr + size;
    int sum = 0;
    while (arr < end) {
        sum += *arr;
        arr++;
    }
    return sum;
}

void reverseArray(int arr[], int size) {
    int *left = arr;
    int *right = arr + size - 1;
    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}

void printArray(int arr[], int size) {
    int *end = arr + size;
    while (arr < end) {
        printf("%d ", *arr);
        arr++;
    }
    printf("\n");
}