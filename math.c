#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {

    int x = 9;
    x = sqrt(x);
    printf("%d\n", x);
    x = 2;
    x = pow(x, 4);
    printf("%d\n", x);
    x = round(3.14);
    printf("%d\n", x);
    float y;
    y = 3.14;
    y = ceil(y);
    printf("%.0f\n", y);
    y = floor(y);
    printf("%.0f\n", y);
    int z = -3;
    z = abs(z);
    printf("%d\n", z);
    y = log(y);
    printf("%f\n", y);
    y = sin(y);
    printf("%.0f\n", y);
    y = cos(y);
    printf("%.0f\n", y);
    y = tan(y);
    printf("%.0f\n", y);

}