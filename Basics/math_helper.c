#include <stdio.h>

void printHeader(float a, float b) {
     printf("==============================\nMATH HELPER RESULTS\n==============================\nNumber 1:   %.2f\nNumber 2:   %.2f\n------------------------------\n", a, b);
}

float add(float a, float b) {
    float result = a + b;
    return result;
}

float subtract(float a, float b) {
    float result = a - b;
    return result;
}

float multiply(float a, float b) {
    float result = a * b;
    return result;
}

float divide(float a, float b) {
    if (b == 0) {
        return 0;
    }
    return a / b;
}

int main () {

    float a = 0.0f;
    float b = 0.0f;

    printf("Number 1: ");
    scanf("%f", &a);
    printf("Number 2: ");
    scanf("%f", &b);

    printHeader(a, b);
    printf("Add:        %.2f\n", add(a,b));
    printf("Subtract:   %.2f\n", subtract(a,b));
    printf("Multiply:   %.2f\n", multiply(a,b));
    float result = divide(a, b);
    if (result == 0) {
        printf("Division by zero error\n");
    } 
    else {
        printf("Divide:     %.2f\n", result);
    }
    printf("==============================\n");

    return 0;

}