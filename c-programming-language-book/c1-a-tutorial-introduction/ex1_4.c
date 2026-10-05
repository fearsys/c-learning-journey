/* Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table. */
#include <stdio.h>
int main () {
    float c, f, upper, lower, step;
    step = 20;
    lower = 0.0f;
    upper = 300.0f;
    c = lower;
    printf("Celsius to Fahrenheit table\n");
    while (c<= upper) {
        f = c * (9.0/5.0) + 32;
        printf("%3.0f %6.2f\n", c, f);
        c = c + step;
    }
    return 0;
}