#include <stdio.h>

int main () {

    int a[] = {2,4,3,0,-7};
    int *p = a;
    int *q = &a[3];
    // int *q = &a[0];
    printf("%d\n", p);
    // printf("%d\n", q); // both are same 
    printf("q - p = %d\n", q - p);
    printf("p - q = %d\n", p - q); 
    printf("value = %d\n", *q);
    q = q - 2;
    printf("value = %d\n", *q);
    p = p + 2;
    printf("q-p = %d\n", q-p);
    // q =q - 2;
    // printf("value = %d\n", *q); // garbage value 
    return 0;

}