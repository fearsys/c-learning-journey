#include <stdio.h>

int main()
{
    // declaring a variable
    int x = 100;
    char c = 'y';

    // printing the address of the variable
    printf("The address of x is %p\n", &x);
    printf("The address of c is %p\n", &c);

    // Using pointers to print memory address as well as the actual value using deferencing 
    int num = 1515;
    int *pnum = &num; // store address of num variable inside pnum pointer
    printf("The address of num is %p\n", pnum);
    printf("The value of num is %d\n", *pnum); // using deferencing operator here 

    return 0;
}