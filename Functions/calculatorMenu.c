#include <stdio.h>

int add(int a, int b);
int subtract(int a , int b);
int divide (int a , int b);
int multiply (int a, int b);

int main () {

    int input = 0;
    int (*operations[4]) (int, int) = {add, subtract, multiply, divide};
    printf("Choose operation (1-Add 2-Sub 3-Mul 4-Div): ");
    scanf("%d", &input);
    if (input < 1 || input > 4) {
        printf("Invalid choice!\n");
        return 1;
    }
    int num1 = 0; int num2 = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Result: %d\n", operations[input-1](num1, num2));
    return 0;
}

int add (int a , int b) { return a + b;}
int subtract (int a, int b) { return a - b;}
int multiply (int a, int b) { return a * b ;}
int divide (int a, int b) {
    if (b!= 0) {
        return a / b;
    }
    printf("Division by zero error!!\n");
    return 0;
}