#include <stdio.h>

int main () {

    int value = 10;
    int *ptr = &value;
    printf("Address is : %d\n", ptr);
    ptr = ptr + 2; // 
    printf("Address is : %d\n", ptr); // 8 is added i.e 2 times size of int 
    ptr = ptr - 3;
    printf("Address is : %d\n", ptr);

    return 0;


}