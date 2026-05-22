#include <stdio.h>

int my_strlen(char s[]);

int main () {
    char s1[] = "C language";
    char s2[] = "";
    char s3[] = "pointer";

    printf("Length of \"%s\" = %d\n", s1, my_strlen(s1));
    printf("Length of \"%s\" = %d\n", s2, my_strlen(s2));
    printf("Length of \"%s\" = %d\n", s3, my_strlen(s3));

    return 0;
}

int my_strlen(char s[]) {
    char *pointer = s;
    int count = 0;
    while (*pointer != '\0') {
        count++;
        pointer++;
    }
    return count;
}