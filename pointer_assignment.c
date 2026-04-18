#include <stdio.h>

int main () {

    int a = 10, b = 11;
    int *pa, *pb;
    pa = &a, pb = &b;
    printf("a = %d %d %d\n", a, *pa, *pb);
    pb =pa;
    printf("a = %d %d %d\n", a, *pa, *pb);
    *pb = *pa;
    printf("a = %d %d %d\n", a, *pa, *pb);
    return 0;

}