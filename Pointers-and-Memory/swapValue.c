#include <stdio.h>

void swap(int *a, int *b);

int main() {
    int x = 10;
    int y = 25;

    printf("Before: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After : x = %d, y = %d\n", x, y);

    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}