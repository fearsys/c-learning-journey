#include <stdio.h>

int main () {
    int value = 10;
    int *ptr = &value;
    printf("Value : %d\n", value);
    *ptr = 20;
    printf("Value : %d\n", value);
    int **ptr2 = &ptr;
    **ptr2 = 30;
    printf("Value : %d\n", value);
}