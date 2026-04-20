#include <stdio.h>

int main () {

    int a[] = {10, 11, -1, 56, 67, 5,4};
    int *p, *q;
    p = a;
    printf("%d \n", *p); 
    printf("%d  %d  %d \n", (*p)++, *p++, *++p); // in (*p)++ it will first return the value at p and then it will increment the value at p not the address **** IMPORTANT
    printf("%d\n", *p);
    q = p + 3;
    printf("%d \n", *q-3);
    printf("%d \n", *--p+5);
    printf("%d \n", *p + *q);

    return 0;

}