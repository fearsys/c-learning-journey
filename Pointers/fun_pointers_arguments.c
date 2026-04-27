#include <stdio.h>

int add (int a, int b) {
    return a + b;
}

int multiply (int a, int b) {
    return a * b;
}

int subtract (int a, int b) {
    return a - b;
}

void calc (int a, int b, int (*operation) (int a, int b)) {
    printf("%d\n", operation(a, b));
}

int main () {

    calc(10,5,add);
    calc(10,5, multiply);
    calc(10,5, subtract);

    return 0;

}