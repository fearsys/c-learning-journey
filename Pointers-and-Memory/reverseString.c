#include <stdio.h>

void reverseString(char dest[], char src[]);

int main() {
    char src[] = "coding";
    char dest[20];

    reverseString(dest, src);

    printf("Original : %s\n", src);
    printf("Reversed : %s\n", dest);

    return 0;
}

void reverseString(char dest[], char src[]) {
    int len = 0;
    char *p = src;

    while (*p != '\0') {
        len++;
        p++;
    }

    char *end = src + len - 1;

    while (end >= src) {
        *dest = *end;
        dest++;
        end--;
    }

    *dest = '\0';
}