#include <stdio.h>
#include <stdlib.h>

int main () {

    int *p = malloc(sizeof(int)); // malloc returns address of allocated memory type void* if successfull and null if unsuccessfull
    if (p == NULL) {
        return 1; // if memory allocation was unsucessfull then return 1 . this will tell the os that the program ran unsuccesfully
    }
    *p = 25; // value at p = 25. deferencing operator after memory allocation was successfull
    
    printf("%d\n", *p);

    free(p);// heap memory is released back to allocated for reuse 
    p = NULL;// our pointer now points to null, this avoids dangling pointer problem

    return 0;
}