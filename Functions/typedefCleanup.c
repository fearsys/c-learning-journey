#include <stdio.h>

typedef void (*ResultHandler)(int, int, int);

void calculate(int a, int b, ResultHandler handler);
void display(int a, int b, int res);
void logResult(int a, int b, int res);

int main() {
    calculate(8, 7, display);
    calculate(8, 7, logResult);
    return 0;
}

void calculate(int a, int b, ResultHandler handler) {
    int res = a + b;
    handler(a, b, res);
}

void display(int a, int b, int res) {
    printf("%d + %d = %d\n", a, b , res);
}

void logResult(int a, int b, int res) {
    printf("[LOG] Operation: %d + %d --> %d", a, b, res);
}