#include <stdio.h>

int power(int base, int exp);

int main () {

    printf("Result: %d\n", power(2,5));
    return 0;
}

int power(int base, int exp) {
    if (exp <= 0) return 1;
    return base * power(base, exp-1);
}