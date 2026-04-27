#include <stdio.h>

int main () {

    int value = 10;
    int* const ptr = &value;
    printf("%d is the value\n", *ptr);
    int value2 = 70;
    // ptr = &value2; this will not work 
    *ptr = 20;
    printf("%d is the value\n", *ptr);
    *ptr = value2;
    printf("%d is the value\n", *ptr); // value we can change using deference operator but memory address can not be changed 

    return 0;

}