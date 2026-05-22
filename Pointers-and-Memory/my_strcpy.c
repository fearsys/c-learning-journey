#include <stdio.h>

void my_strcpy(char dest[], char src[]);

int main () {
    char src[] = "pointer";
    char dest[20];

    my_strcpy(dest, src);
    printf("%s\n", dest);

    return 0;
}

void my_strcpy(char dest[], char src[]) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}
    
   