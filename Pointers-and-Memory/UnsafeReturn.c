#include <stdio.h>

int* badPointer(void);

int main() {
    /*int *p = badPointer();

    printf("%p\n", (void*)p);

    return 0;
    */
}

int* badPointer(void) {
    int x = 10;
    // return &x; // Local variable lives in the stack. stack is destroyed after the function ends and so the local variables
    // the returned pointer now points to garbage or invalid memory that may or may not contain anything
}