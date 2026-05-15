#include <stdio.h>

int main() {
    int x = 100;
    int y = 200;

    printf("x value   : %d\n", x);
    printf("x address : %p\n", (void*)&x);
    printf("y value   : %d\n", y);
    printf("y address : %p\n", (void*)&y);

    return 0;
}