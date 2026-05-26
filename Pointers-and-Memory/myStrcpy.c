#include <stdio.h>

void myStrcpy(char *dest, const char *src);

int main() {
    char src[] = "Hello World";
    char dest[50];

    myStrcpy(dest, src);

    printf("Copied string: %s\n", dest);

    return 0;
}

void myStrcpy(char *dest, const char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}