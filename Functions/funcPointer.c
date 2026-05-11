#include <stdio.h>

int add(int, int);
int subtract (int, int);
int multiply (int, int);

int main () {

    int a = 10;
    int b = 5;
    int (*fp) (int , int) = add;
    printf("Add: %d\n", fp(a,b));
    fp = subtract;
    printf("Subtract: %d\n", fp(a,b));
    fp = multiply;
    printf("Multiply: %d\n", fp(a,b));
    return 0;
}
int add (int a , int b) {
    return a + b;
}
int subtract (int a, int b) {
    return a - b;
}
int multiply (int a, int b) {
    return a * b;
}

