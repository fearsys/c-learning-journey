#include <stdio.h>

void addOne(int *p);

int main() {
    int x = 42;

    printf("Before: %d\n", x);

    addOne(&x);

    printf("After : %d\n", x);

    return 0;
}

void addOne(int *p) {
    *p += 1;
}