#include <stdio.h>

int myStrlen(const char *s);

int main() {
    char str[] = "Hello World";

    int len = myStrlen(str);

    printf("Length = %d\n", len);

    return 0;
}

int myStrlen(const char *s) {
    int count = 0;
    while (*s != '\0') {
        count++;
        s++;
    }
    return count;
}