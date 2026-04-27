#include <stdio.h>

int main () {

    int arr [7] = {0,1,2,3,4,5,6};
    void *ptr = arr;
    printf("Address: %p\n", ptr);
    printf("Value: %d\n", *(int *)ptr);
    ptr = ptr + sizeof(int);
    printf("Address: %p\n",ptr);
    printf("Value: %d\n", *(int *)ptr);
    
    return 0;

}