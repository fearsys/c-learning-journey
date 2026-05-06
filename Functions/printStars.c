#include <stdio.h>

void printStars(int n);

int main () {

    printStars(3);
    printStars(5);
    printStars(7);

    return 0;

}

void printStars (int n) {
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
}