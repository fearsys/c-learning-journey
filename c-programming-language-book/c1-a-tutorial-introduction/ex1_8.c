/* Exercise 1-8. Write a program to count blanks, tabs, and newlines.*/
#include <stdio.h>
int main () {
    int c,bl, tb, nl;
    bl = 0, tb = 0; nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') ++nl;
        else if (c == ' ') ++bl;
        else if (c == '\t') ++tb;
    }
    printf("Blanks : %d, Tabs: %d, Newlines %d\n", bl, tb, nl);
    return 0;
}