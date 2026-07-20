#include <stdio.h>

int main () {
    
    int upper, lower, step;
    float fahr, celsius;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("TEMPERATURE CONVERSION TABLE\n");
    printf("fahr celcius\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.2f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}