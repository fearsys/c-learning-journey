#include <stdio.h>
#include <stdlib.h>

int main () {
    int *mallocPtr = malloc(sizeof(int));
    if (mallocPtr == NULL) {
        return 1;
    }
    printf("Value at the allocated memory: %d\n", *mallocPtr); // Reading uninitialized data, undefined behaviour
    free(mallocPtr);
    
    int *callocPtr = calloc(1, sizeof(int));
    if(callocPtr == NULL) {
        return 1;
    }
    printf("Value at the allocated memory (by calloc): %d\n", *callocPtr);
    free(callocPtr);
    callocPtr = NULL;
    return 0;
}