#include <stdio.h>

int main() {
    char word[] = "pointer";
    char *p = word;
    int len = 0;

    while (*p != '\0') {
        printf("'%c' at %p\n", *p, (void*)p);
        len++;
        p++;
    }

    printf("Length: %d\n", len);
    return 0;
}