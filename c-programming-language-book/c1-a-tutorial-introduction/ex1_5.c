/* Exercise 1-5. Modify the temperature conversion program to print the table in reverse order,
that is, from 300 degrees to 0. */
#include <stdio.h>
int main () {
    float c, f, upper, lower, step;
    step = 20;
    lower = 0.0f;
    upper = 300.0f;
    c = upper;
    printf("Celsius to Fahrenheit table\n");
    while (c >= lower) {
        f = c * (9.0/5.0) + 32;
        printf("%3.0f %6.2f\n", c, f);
        c = c - step;
    }
    return 0;
}
