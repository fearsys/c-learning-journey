#include <stdio.h>

int main() {
    int score = 75;
    int *p = &score;

    printf("Original: %d\n", *p);

    *p += 10;

    printf("Value: %d, %d\n", *p, score);

    return 0;
}