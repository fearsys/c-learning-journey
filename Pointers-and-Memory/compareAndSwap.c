#include <stdio.h>

void compareAndSwap(int *a, int *b);

int main() {
    int x = 25;
    int y = 10;

    printf("Before: x = %d, y = %d\n", x, y);

    compareAndSwap(&x, &y);

    printf("After : x = %d, y = %d\n", x, y);

    return 0;
}

void compareAndSwap(int *a, int *b) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}