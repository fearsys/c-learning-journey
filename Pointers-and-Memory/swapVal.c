#include <stdio.h>

void swapValues(int **pp1, int **pp2);

int main() {

    int a = 15;
    int b = 40;

    int *p1 = &a;
    int *p2 = &b;

    printf("Before: a = %d, b = %d\n", a, b);

    swapValues(&p1, &p2);

    printf("After : a = %d, b = %d\n", a, b);

    return 0;
}

void swapValues(int **pp1, int **pp2) {
   int temp = **pp1;
   **pp1 = **pp2;
   **pp2 = temp;
}