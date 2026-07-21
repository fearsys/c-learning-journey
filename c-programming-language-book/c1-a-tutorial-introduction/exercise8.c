#include <stdio.h>

int main () {

    int blank, tab, newline, c;
    for (blank = 0, tab = 0, newline = 0; (c = getchar()) != EOF;) {
        if ( c == '\n') ++newline;
        if (c == '\t') ++tab;
        if (c == ' ') ++blank;
    }
    printf("Total Blanks: %d\nTotal Tabs: %d\nTotal newlines: %d\n", blank, tab, newline);

    return 0;
}