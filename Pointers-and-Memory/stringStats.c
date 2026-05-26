#include <stdio.h>

void stringStats(
    const char *s,
    int *vowels,
    int *letters,
    int *len
);

int main() {
    char str[] = "Hello123!";

    int vowels;
    int letters;
    int len;

    stringStats(str, &vowels, &letters, &len);

    printf("Vowels  = %d\n", vowels);
    printf("Letters = %d\n", letters);
    printf("Length  = %d\n", len);

    return 0;
}

void stringStats(
    const char *s,
    int *vowels,
    int *letters,
    int *len
) {
    *vowels = 0;
    *letters = 0;   
    *len = 0; 
    while (*s != '\0') {
        if (*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u' || *s == 'A' || *s == 'E' || *s == 'I' || *s == 'O' || *s == 'U') {
            (*vowels)++;
        }
        if ((*s >= 'A' && *s <= 'Z') || (*s >= 'a' && *s <= 'z')) {
            (*letters)++;
        }   
        (*len)++;
        s++;
    }
}