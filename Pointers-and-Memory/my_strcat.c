#include <stdio.h>

void my_strcat(char dest[], char src[]);

int main () {
    char dest[20] = "hello";
    char src[] = " world";

    my_strcat(dest, src);
    printf("%s\n", dest);

    return 0;
}

void my_strcat(char dest[], char src[]) {
    while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}