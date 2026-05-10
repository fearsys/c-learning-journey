#include <stdio.h>

int countChars(const char str[], char target);
int isPalindrome(const char str[]);

int main () {

    char word1[] = "racecar";
    char word2[] = "hello";
    char sentence[] = "programming";

    char target = 'r';
    printf("'%c' in '%s': %d\n", target, word1, countChars(word1, target) );
    target = 'l';
    printf("'%c' in '%s': %d\n", target, word2, countChars(word2, target) );
    target = 'g';
    printf("'%c' in '%s': %d\n", target, sentence, countChars(sentence, target) );
    printf("%s is a palindrome: %d\n", word1, isPalindrome(word1));
    printf("%s is a palindrome: %d\n", word2, isPalindrome(word2)); 

    return 0;
}

int countChars(const char str[], char target) {
    int count = 0;
    for(int i = 0; str[i] != '\0';i++) {
        if (str[i] ==  target) count++;
    }
    return count;
}

int isPalindrome(const char str[]) {
    int size = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        size++;
    }
    for (int i = 0; i < size/2; i++) {
        if (str[i] != str[size-i-1]) return 0;
    }
    return 1;
}
