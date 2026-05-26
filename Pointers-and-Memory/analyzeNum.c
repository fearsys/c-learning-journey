#include <stdio.h>

void analyzeNumber(int n, int *isEven, int *isPositive);

int main() {
    int n = -8;

    int isEven;
    int isPositive;

    analyzeNumber(n, &isEven, &isPositive);

    printf("isEven     = %d\n", isEven);
    printf("isPositive = %d\n", isPositive);

    return 0;
}

void analyzeNumber(int n, int *isEven, int *isPositive) {
    if (n > 0) *isPositive = 1;
    else *isPositive = 0;
    if (n % 2 == 0) *isEven = 1;
    else *isEven = 0;
}