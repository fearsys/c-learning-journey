#include <stdio.h>

int myStrcmp(const char *a, const char *b);

int main() {
    char s1[] = "apple";
    char s2[] = "apply";

    int result = myStrcmp(s1, s2);

    printf("Result = %d\n", result);

    return 0;
}

int myStrcmp(const char *a, const char *b) {
    while (*a != '\0' || *b != '\0') {
        if (*a > *b) return 1;
        else if (*a < *b) return -1;
        else {
        a++;
        b++;
        }
    }
    return 0;
}