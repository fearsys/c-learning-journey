#include <stdio.h>
#include <string.h>

int isEqual(char a[], char b[]);

int main () {
    char x[] = "apple";
    char y[] = "apple";
    char z[] = "apples";

    printf("%d\n", isEqual(x, y));
    printf("%d\n", isEqual(x, z));

    return 0;
}

int isEqual(char a[], char b[]) {
    if (strlen(a) != strlen(b)) {
        return 0;
    }
    while (*a != '\0' && *b != '\0') {
        if (*a != *b) {
            return 0;
        }
        a++;b++;
    }
    return 1;
}