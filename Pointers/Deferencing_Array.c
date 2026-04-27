#include <stdio.h>

int main()
{
    // Array Declared
    int arr[] = {1, 2, 3, 4, 5};

    // Referencing array with pointer
    int *ptr = arr;

    // Using dereferencing to print elements of array
    printf("Elements of array: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Memory address: %p\n", (void *)(ptr +i));
        printf("Memory address: %d\n", (void *)(ptr +i)); 
        printf("Element : %d\n", *(ptr + i));
    }
    printf("\n");

    return 0;
}