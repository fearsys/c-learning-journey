#include <stdio.h>

int findChar(char *s, char target);

int main() {
    char str[] = "Hello World";

    int index = findChar(str, 'o');

    printf("Index = %d\n", index);

    return 0;
}

int findChar(char *s, char target) {
    int index = 0;
    while (*s != '\0') {
        if (*s == target) return index;
        s++;
        index++;
    }
    return -1;
}