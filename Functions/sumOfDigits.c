#include <stdio.h>

int sumDigits(int n);

int main () {
    int digit = 9045;
    printf("Sum of %d is %d:\n",digit, sumDigits(digit));
    return 0;
}
int sumDigits(int n) {
    if (n < 10) return n;
    return n % 10 + sumDigits(n / 10);
}