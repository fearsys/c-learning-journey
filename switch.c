#include <stdio.h>

int main () {

    int input = 0;
    printf("Type a number: ");
    scanf("%d", &input);

    switch(input) {
        case 1: 
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5: 
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default: 
        printf("Please input a number between 1 to 7");
    }
    return 0;
}