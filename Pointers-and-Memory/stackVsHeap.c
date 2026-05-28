#include <stdio.h>
#include <stdlib.h>

int* g() {
    int *x = malloc(sizeof(int));
    if (x == NULL) {
        return NULL;
    }
    *x = 42;
    return x;
}

int main() {
    int *value = g();
    if (value == NULL) {
        return 1;
    }
    printf("Value : %d\n", *value);
    free(value);
    value = NULL;

    return 0;

}