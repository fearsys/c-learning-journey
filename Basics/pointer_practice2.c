#include <stdio.h>

void line() {
    printf("-----------------\n");
}

int main () {

    int a = 10, b = 9;
    int *pa, *pb;
    pa = &a;
    printf("%p\n", pa);
    pa = &b;
    printf("%p\n", pa);
    pa = &a, &b;
    printf("%p\n", pa);
    pa = (&a, &b);
    printf("%p\n", pa);
    line();
    pa = &a;
    pb = &b;
    printf("%p\n", pa);
    printf("%p\n", pb);
    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);
    printf("Value of a: %d\n", pa); // 0061FF14 was converted to decimal 
    printf("Value of b: %d\n", pb);
    printf("Value of a: %d\n", *pa);
    printf("Value of b: %d\n", *pb);
    printf("Value of a: %d\n", *(&a));
    printf("Value of b: %d\n", *(&b));
    printf("Address of a : %x\n", &a);
    printf("Address of a: %x\n", pa); 


    return 0;
}