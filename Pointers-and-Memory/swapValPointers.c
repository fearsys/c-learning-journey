#include <stdio.h>

void swapPointers(int **pp1, int **pp2);

int main() {

    int a = 15;
    int b = 40;

    int *p1 = &a;
    int *p2 = &b;

    printf("Before:\n");
    printf("*p1 = %d\n", *p1);
    printf("*p2 = %d\n", *p2);

    swapPointers(&p1, &p2);

    printf("After:\n");
    printf("*p1 = %d\n", *p1);
    printf("*p2 = %d\n", *p2);

    return 0;
}

void swapPointers(int **pp1, int **pp2) {

    int *temp = *pp1;
    *pp1 = *pp2;
    *pp2 = temp;
}