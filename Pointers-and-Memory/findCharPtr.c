#include <stdio.h>

char* findCharPtr(char *s, char target);

int main() {
    char str[] = "Hello World";

    char *ptr = findCharPtr(str, 'o');

    if (ptr != NULL)
        printf("Found: %s\n", ptr);
    else
        printf("Character not found\n");

    return 0;
}

char* findCharPtr(char *s, char target) {
    while (*s != '\0') {
        if (*s == target) return s;
        s++;
    }
    return NULL;
}