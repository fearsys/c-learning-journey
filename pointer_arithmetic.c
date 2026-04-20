#include <stdio.h>

int main () {

    int a[5] = {1,4,2,-8,0};
    int *p = &a[0];
    int *q = &a[0];
    // p = p + q; we can not add two pointer variables 
    printf("Address is : %x\n", p);
    printf("Address is : %d\n", p);
    printf("Value is : %d\n", *p);
    p = p +2; // p = p + n * size of data type 
    *p = 34; // this changes the a[2] to 34
    printf("Address is : %x\n", p);
    printf("Address is : %d\n", p);
    printf("Value is : %d\n", *p);


    return 0;

}