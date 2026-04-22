#include <stdio.h>

int main () {

    int a = 10;
    int *p = NULL; // We use null to point to nothing. its better to point to nothing than initialize without any value 
    printf("%d\n", a);
    // printf("%d\n", p); undefined behaviour. 
    return 0;

}