#include <stdio.h>
int main () {

    int number = 0;
    do {
        printf("Guess the number from 0 to 10: ");
        scanf("%d", &number);
    } while ( number != 3);
    printf("Congratulations you found the number");
    return 0;
}