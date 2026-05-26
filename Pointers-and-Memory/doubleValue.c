#include <stdio.h>

void doubleValue(int *p);

int main() {
    int x = 5;

    printf("Before: %d\n", x);

    doubleValue(&x);

    printf("After : %d\n", x);

    return 0;
}

void doubleValue(int *p) {
    *p *= 2;
}