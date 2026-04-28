#include <stdio.h>

typedef int* integerPointer; // int* is changed to integerpointer

int main () {

    int x = 10;
    integerPointer ptr = &x;
    printf("%d\n", *ptr);

    return 0;   
}