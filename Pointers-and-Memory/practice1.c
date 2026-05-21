#include <stdio.h>

int main() {
    int x = 42;
    double y = 3.14;
    int *px;
    double *py;

    px = &x;
    py = &y;

    printf("Value of x: %d, address of x: %p\n", x, px);
    printf("Value of y: %f, address of y: %p\n", y, py);
    printf("Size of x: %zu, Size of y: %zu\n", sizeof(x), sizeof(y));

    return 0;
}