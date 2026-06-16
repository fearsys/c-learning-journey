#include <stdio.h>

void pointToY(int **pp, int *target);
void pointToZ(int **pp, int *target);
void resetToX(int **pp, int *target);

int main() {

    int x = 1;
    int y = 2;
    int z = 3;

    int *p = &x;

    printf("p points to: %d\n", *p);

    pointToY(&p, &y);
    printf("p points to: %d\n", *p);

    pointToZ(&p, &z);
    printf("p points to: %d\n", *p);

    resetToX(&p, &x);
    printf("p points to: %d\n", *p);

    *p = 999;
    printf("x after modify: %d\n", x);

    return 0;
}

void pointToY(int **pp, int *target) {
    *pp = target;
}

void pointToZ(int **pp, int *target) {
    *pp = target;
}

void resetToX(int **pp, int *target) {
    *pp = target;
}