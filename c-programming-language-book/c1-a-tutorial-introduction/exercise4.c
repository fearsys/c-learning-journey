#include <stdio.h>

int main () {
    
    int upper, lower, step;
    float cel, fahr;
    upper = 100;
    lower = 0;
    step = 10;

    cel = lower;

    while (cel <= upper) {
        fahr = (cel * 1.8) + 32;
        printf("%3.0f %6.2f\n", cel, fahr);
        cel = cel + step;
    }

    return 0;
}