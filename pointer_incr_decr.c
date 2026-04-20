#include <stdio.h>

int main () {

    int a[] = {3,2,67,0,56};
    int *p;
    p = &a[3];
    // printf("%d %d\n", *(p++), *p++); // post increment
    // printf("%d\n", *p); // p has been incremented
    printf("%d\n", *p--);
    printf("%d\n", *p); 

    return 0;

}