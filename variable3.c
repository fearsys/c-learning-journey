#include <stdio.h>
int main () {
    double pi = 3.141592653589793;
    double e = 2.718281828459045;
    printf("Pi = %lf\n", pi); // %lf acts a place holder for doulbe i.e. long float 
    // This is only printing 6 digits after decimal which is the default for C I guess
    printf("Pi = %.15lf\n", pi);
    printf("e = %.15lf\n", e);
    return 0;
}