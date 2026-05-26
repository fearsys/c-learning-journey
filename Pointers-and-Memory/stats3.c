#include <stdio.h>

void stats3(int a, int b, int c,
            int *min,
            int *max,
            float *avg);

int main() {
    int a = 15;
    int b = 4;
    int c = 27;

    int min;
    int max;
    float avg;

    stats3(a, b, c, &min, &max, &avg);

    printf("Min = %d\n", min);
    printf("Max = %d\n", max);
    printf("Avg = %.2f\n", avg);

    return 0;
}

void stats3(int a, int b, int c, int *min, int *max, float *avg) {
    *max = a;
    if ( b > *max) *max = b;
    if ( c > *max ) *max = c;
    *min = a;
    if ( b < *min ) *min = b;
    if ( c < *min ) *min = c;
    
    *avg = ( a + b + c ) / 3.0;
}