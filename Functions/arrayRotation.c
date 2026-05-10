#include <stdio.h>

void rotateLeft(int arr[], int size, int steps);

int main () {

    int nums[] = {1,2,3,4,5};
    int size = sizeof(nums)/sizeof(nums[0]);
    int steps = 2;
    rotateLeft(nums,size,steps);
    printf("After rotating left by %d: ",steps);
    for(int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    rotateLeft(nums, size, 3);
    printf("After rotating left by 3: ");
    for (int i = 0; i < size; i++) printf("%d ", nums[i]);
    printf("\n");
    
    return 0;

}

void rotateLeft(int arr[], int size, int steps) {
    
    for (int j = 0; j < steps; j++) {
    
        int temp = arr[0];
        for (int i = 0; i < size-1; i++) {
            arr[i] = arr[i+1];
        }
        arr[size-1] = temp;
    }
}