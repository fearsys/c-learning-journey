#include <stdio.h>

int safe_strcat(char dest[], int destSize, char src[]);

int main() {
    char dest[20] = "good";
    char src[] = " morning";

    if (safe_strcat(dest, 20, src))
        printf("%s\n", dest);
    else
        printf("Buffer too small\n");

    char dest2[10] = "good";

    if (safe_strcat(dest2, 10, src))
        printf("%s\n", dest2);
    else
        printf("Buffer too small\n");

    return 0;
}

int safe_strcat(char dest[], int destSize, char src[]) {
    char *dp = dest;
    char *sp = src;
    int lendest = 0;
    while (*dp != '\0') {
        lendest++;
        dp++;
    }
    int lensrc = 0;
    while (*sp != '\0') {
        lensrc++;
        sp++;
    }
    if (lendest + lensrc + 1 > destSize) {
    return 0;
    }
    while (*src != '\0') {
        *dp = *src;
        src++;
        dp++;
    }
    *dp = '\0';
    return 1;
}