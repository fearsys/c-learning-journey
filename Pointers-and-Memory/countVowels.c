#include <stdio.h>

int countVowels(const char *s);

int main() {
    char str[] = "Hello World";

    int count = countVowels(str);

    printf("Vowels = %d\n", count);

    return 0;
}

int countVowels(const char *s) {
    int vowelCount = 0;
    while (*s != '\0') {
        char x = *s;
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'|| x == 'A'|| x == 'E'|| x == 'I'|| x == 'O'|| x == 'U') {
            vowelCount++;
        }
        s++;
    }
    return vowelCount;
}