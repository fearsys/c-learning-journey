#include <stdio.h>

void quadraticStats(float a, float b, float c, float *sum, float *product, float *avg);

int main () {

    float sum = 0.0f;
    float product = 0.0f;
    float avg = 0.0f;
    quadraticStats(4.0, 6.0, 8.0, &sum, &product, &avg);
    printf("Sum:     %.2f\nProduct: %.2f\nAverage: %.2f\n", sum, product, avg);

    return 0;

}

void quadraticStats(float a, float b, float c, float *sum, float *product, float *avg) {
   *sum = a + b + c;
   *product = a * b * c;
   *avg = *sum / 3.0;
}