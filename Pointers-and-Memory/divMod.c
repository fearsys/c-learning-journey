#include <stdio.h>

void divmod(int a, int b, int *q, int *r);

int main() {
    int a = 17;
    int b = 5;

    int quotient;
    int remainder;

    divmod(a, b, &quotient, &remainder);

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);

    return 0;
}

void divmod(int a, int b, int *q, int *r) {
    if ( b == 0 ) {
        *q = 0;
        *r = 0;
        return;
    }
    else {
        *q = a / b;
        *r = a % b;
    }
}