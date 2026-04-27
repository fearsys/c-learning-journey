#include <stdio.h>

int main()
{

    int var = 10;
    int *ptr = &var;
    // double pointer
    int **dptr = &ptr;

    // dereferencing the double pointer
    printf("Accesing value from double pointer using "
           "**dptr: %d",
           **dptr);
    return 0;
}