#include <stdio.h>
#include <math.h>

int main () {
    
    const double PI = 3.14159;
    double input = 0.0;

    printf("Enter a number: ");
    scanf("%lf", &input);
    printf("Square root : %.2f\n", sqrt(input));
    printf("Squared: %.2f\n", pow(input, 2));
    printf("Cubed: %.2f\n", pow(input, 3));
    printf("Rounded: %.2f\n", round(input));
    printf("Ceiling: %.0f\n", ceil(input));
    printf("Floor: %.0f\n", floor(input));
    printf("Absolute Value: %.2f\n", fabs(input));
    printf("Log: %f\n", log(input));
    
    double radians = input * PI / 180;
    
    printf("Sine: %f\n", sin(radians));
    printf("Cosine: %f\n", cos(radians));
    printf("Tangent: %f\n", tan(radians));

    return 0;
}