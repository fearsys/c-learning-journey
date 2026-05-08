#include <stdio.h>

void process(int a, int b, int c) {
    a = a * 2;
    b = b + 10;
    c = a + b;
    printf("Inside:  a=%d, b=%d, c=%d\n", a, b, c);
}

int main() {
    int x = 5, y = 3, z = 100;
    process(x, y, z);
    printf("Outside: x=%d, y=%d, z=%d\n", x, y, z);
    return 0;
}