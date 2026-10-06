/* Exercise 1-11. How would you test the word count program? What kinds of input are most
likely to uncover bugs if there are any?*/

#include<stdio.h>
#define IN 1
#define OUT 0

int main () {
    int nw, c, state;
    nw = 0;
    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
        }
        else if (state == OUT) {
        state = IN;
        ++nw;
        }
    }
    printf("Number of words: %d\n", nw);
    return 0;
}