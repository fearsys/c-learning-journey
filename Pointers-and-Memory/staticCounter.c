#include <stdio.h>

int* counter(void);

int main() {
    printf("%d\n", *counter());
    printf("%d\n", *counter());
    printf("%d\n", *counter());

    return 0;
}

int* counter(void) {
    static int count = 0;
    count++;
    return &count;
}