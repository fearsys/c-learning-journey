#include <stdio.h>

int findCharIndex(char s[], char target);

int main () {
    char s[] = "banana";

    char target1 = 'n';
    char target2 = 'z';

    printf("%c found at index %d\n",target1, findCharIndex(s, target1));
    printf("%c found at index %d\n",target2, findCharIndex(s, target2));

    return 0;
}

int findCharIndex(char s[], char target) {
    int index = 0;
    while (*s != '\0') {
        if (*s == target) {
            return index;
        }
        s++;
        index++;
    }
    return -1;
}