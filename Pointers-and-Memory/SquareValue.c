#include <stdio.h>

void square(int *p);

int main() {
    int x = 7;

    printf("Before: %d\n", x);

    square(&x);

    printf("After : %d\n", x);

    return 0;
}

void square(int *p) {
    *p *= *p;
}