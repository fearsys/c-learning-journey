#include <stdio.h>

int add (int a , int b) {
    return a + b;
}

int sub (int a , int b) {
    return a - b;
}

int mul (int a, int b) {
    return a * b;
}

int main () {

    int (*fptr[]) (int, int) = {add, sub, mul};
    printf("Addition: %d\n", fptr[0](10, 5));
    printf("Subtraction: %d\n", fptr[1](10, 5));
    printf("Multiplication: %d\n", fptr[2](10, 5));

    return 0;

}