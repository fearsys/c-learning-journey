#include <stdio.h>

int main () {

    char str[] = "Welcome to Praveen's C learning journey";
    printf("%d\n", sizeof(str));
    printf("%d\n", sizeof(str[0]));
    char *ptr = str;
    printf("%c\n", *ptr);
    printf("%c\n", *(ptr++ +1));
    printf("%c\n", *((ptr-- +5) - 1) + 3);
    printf("%c\n", *(++ptr +10) - 30);
    printf("%c %c %c", *ptr, *++ptr, *--ptr);

    return 0;

}