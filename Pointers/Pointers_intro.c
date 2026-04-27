#include <stdio.h>

int main()
{

    // Normal Variable
    int var = 10;

    // Pointer Variable ptr that stores address of var
    int *ptr = &var;

    // Directly accessing ptr will give us an address
    printf("%p\n", ptr); 
    printf("%d\n", ptr); // memeory address is being printed in a base 10 system 
    printf("%x\n", ptr);
    printf("%#x\n", ptr); // print with 0x prefix
    printf("%d\n", *ptr); // this will print value at pointer deferencing operator is being used here 


    return 0;
}