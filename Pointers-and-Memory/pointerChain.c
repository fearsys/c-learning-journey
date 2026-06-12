#include <stdio.h>

int main() {

    int x = 77;
    int *p = &x;
    int **pp = &p;
    
    printf("Address of p : %p\n", pp);
    printf("Address of x: %p\n", *pp);
    printf("Value of x: %d\n", x);
    printf("Value of x using only pp: %d\n", **pp);
    **pp = 200;
    printf("New value of x: %d\n", x);
  
    return 0;
}