#include <stdio.h>

int square(int n);
int cube(int n);

int main () {
    int input = 4;
    int (*fp) (int) = square;
    printf("Square: %d\n", fp(input));
    fp = cube;
    printf("Cube: %d\n", fp(input));

    return 0;
}
int square(int n) {
    return n * n;
}
int cube(int n) {
    return n * n * n;
}