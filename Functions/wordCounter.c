#include <stdio.h>

int wordCount(const char str[]);       
void logCall(const char str[]);

int main () {

    char s1[] = "hello world";
    char s2[] = "the quick brown fox";
    char s3[] = "c programming";
    logCall(s1);
    logCall(s2);
    logCall(s3);

    return 0;
}
int wordCount(const char str[]) {
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') count ++;
    }
    return count + 1;
}
void logCall(const char str[]) {
    static int call = 0;
    call++;
    printf("Call #%d: \"%s\" has %d words\n", call, str, wordCount(str));
}
