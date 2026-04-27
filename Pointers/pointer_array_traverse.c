#include <stdio.h>

int main () {

    int arr[8] = {1,2,3,4,5,6,7,8};
    int *ptr = arr;
    for (int i = 0; i < sizeof(arr)/ sizeof(arr[0]) ; i++) {
        printf("%d ", ptr[i]);  // ptr[i]  ≡  *(ptr + i)
    }

    return 0;

}