#include <stdio.h>

int main () {
    int x = 10;
    int y = 3;
    int z = 0;
    int add = x + y;
    int diff = x - y;
    int multiply = x * y;
    int div = x / y;
    int mod = x % y;
    float p = 10.00;
    float q = 3.00;
    float r = 0;
    float div2 = p / q;

    printf("X: %d\n", x);
    printf("Y: %d\n", y);
    printf("Add: %d\n", add);
    printf("Difference: %d\n", diff);
    printf("Multiplication: %d\n", multiply);
    printf("Division: %d\n", div);
    printf("Modulus: %d\n", mod);
    printf("When %f is divided by %f then the qoutient is %f\n", p, q, div2);

    x = x + 1;
    printf("%d\n", x); 
    x++;
    printf("%d\n", x); 
    // Augmented Assignment operators
    // x = x + 7 can be written as x+=7;
    x+=8;
    printf("%d\n", x); 
    // similary we can do x-=10, x/=2; x*=2;
    return 0;
    
}