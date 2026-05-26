#include <stdio.h>

int myStrlen(const char *s);

int main() {
    char str[] = "Programming";

    int len = myStrlen(str);

    printf("Length = %d\n", len);

    return 0;
}

int myStrlen(const char *s) {
    int length = 0;
    while ( *s != '\0') {
        length++;
        s++;
    }
    return length;
}