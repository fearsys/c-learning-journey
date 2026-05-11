#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int start, int end);

int main () {

    char s[] = "racecar";
    int len = strlen(s);
    int ans = isPalindrome(s, 0, len - 1);  // start=0, end=last index
    printf("%d\n",ans);
    return 0;
}

int isPalindrome(char str[], int start, int end) {
    if (str[start] != str[end]) return 0;  // mismatch → not palindrome
    if (start >= end) return 1;  // covers both odd and even length 
    return isPalindrome(str, start+1, end - 1);
}