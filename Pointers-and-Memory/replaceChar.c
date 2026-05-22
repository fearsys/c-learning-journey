#include <stdio.h>

void replaceChar(char s[], char target, char replacement);

int main () {
    char s1[] = "mississippi";
    char s2[] = "hello world";

    replaceChar(s1, 's', 'x');
    replaceChar(s2, 'o', '0');

    return 0;
}

void replaceChar(char s[], char target, char replacement) {
    char *start = s;
    printf("Before : %s\n", start);
    while (*s != '\0') {
        if (*s == target) {
            *s = replacement;
        }
        s++;
    }
    printf("After : %s\n", start);
}
