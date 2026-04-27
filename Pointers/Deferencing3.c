#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    int *pt;

    // Referencing the pointer to variable 'a'
    pt = &a;

    printf("The address where a is stored is: %p\n", (void *)pt);

    // Dereference the pointer
    printf("The value stored at that address is: %d\n", *pt);

    // Referencing the address of 'b' to the same pointer
    pt = &b;

    // Dereference again
    printf("Pointer is now pointing at: %p\n", (void *)pt);
    printf("New value the pointer is pointing to is: %d\n", *pt);

    return 0;
}