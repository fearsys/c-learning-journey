#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a = malloc(sizeof(int));
    int *b = malloc(sizeof(int));
    int *c = malloc(sizeof(int));

    if (a != NULL) {free(a);}
    if (b != NULL) {free(b);}
    a = NULL;
    b = NULL;
    printf("a is %s\n", (a == NULL ? "NULL" : "not NULL"));
    printf("b is %s\n", (b == NULL ? "NULL" : "not NULL"));
    printf("c is %s\n", (c == NULL ? "NULL" : "not NULL"));

    if (c != NULL) {free(c);}
    c = NULL;
    return 0;
}