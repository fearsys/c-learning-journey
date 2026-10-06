/* Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank.*/
#include <stdio.h>
int main () {
    int c, signal = 1;
    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
            signal = 1;
        }
        else if ( c == ' ') {
            if (signal == 1) {
                putchar(c);
                signal = 0;
            }
        }      
    }
    return 0;
}