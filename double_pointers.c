#include <stdio.h>

int main () {

    int a = 10;
    int *pa = &a;
    int **pb = &pa;
    int ***pc = &pb;

    printf("a = %d %d %d %d", a, *pa , **pb, ***pc);

    return 0;
}