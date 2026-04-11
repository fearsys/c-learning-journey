#include <stdio.h>
#include <math.h>

int main () {

    double radius = 0.0;
    double area = 0.0;
    const double PI = 3.14159;
    double circumference = 0.0;

    printf("Radius (in cms): ");
    scanf("%lf", &radius);

    area = PI  * pow(radius, 2);
    circumference = 2 * PI * radius;

    printf("Area: %f cms sq.\n", area);
    printf("Circumference: %f cms\n", circumference);

    return 0;
}