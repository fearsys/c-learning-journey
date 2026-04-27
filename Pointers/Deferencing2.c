#include <stdio.h>

int main(void) {
    int var = 10;
    int *pt = NULL;

    pt = &var;

    printf("The address is : %p\n", (void*)pt); // typecasting to convert this into a generic pointer

    /* We get value by dereferencing */
    printf("Updated value is %d\n", *pt);

    /* Update value using dereferencing */
    *pt = 20;
    printf("Further updated value is %d\n", var);

    var = 30;

    /* Access new updated value using dereferencing */
    printf("The value is %d\n", *pt);

    return 0;
}