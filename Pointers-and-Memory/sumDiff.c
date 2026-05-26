#include <stdio.h>

void sumDiff(int a, int b, int *sum, int *diff);

int main() {
    int a = 15;
    int b = 4;

    int sum;
    int diff;

    sumDiff(a, b, &sum, &diff);

    printf("Sum  = %d\n", sum);
    printf("Diff = %d\n", diff);

    return 0;
}

void sumDiff(int a, int b, int *sum, int *diff) {
    *sum = a + b;
    *diff = a - b;
}