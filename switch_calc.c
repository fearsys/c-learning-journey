#include <stdio.h>

int main () {

    float number = 0.0f;
    float number2 = 0.0f;
    char input = '\0';
    float result = 0.0f;

    printf("Enter first number: ");
    scanf("%f", &number);
    printf("Enter operator (+, -, *, /):");
    scanf(" %c", &input);
    printf("Enter second number: ");
    scanf("%f", &number2);

    switch (input) {
        case '+' :
        result = number + number2;
        printf("Result: %f %c %f = %f", number, input, number2, result);
        break;
        case '-' :
        result = number - number2;
        printf("Result: %f %c %f = %f", number, input, number2, result);
        break;
        case '*':
        result = number * number2;
        printf("Result: %f %c %f = %f", number, input, number2, result);
        break;
        case '/':
        if (number2 == 0) {
            printf("Division by zero not possible");
        } else {
            result = number / number2;
            printf("Result: %f %c %f = %f", number, input, number2, result);
        }
        break;
        default: 
        printf("Use a valid operating symbol");
    }
    
    return 0;
}
// We could also have used the print statement only one time here. Just put return 0 after the divide by zero error and use the print statement outside the switch block