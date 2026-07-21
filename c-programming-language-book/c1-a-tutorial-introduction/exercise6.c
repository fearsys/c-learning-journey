#include <stdio.h>

int main () {
    
    int c;
    c = getchar();
    printf("%d\n", c != EOF); // if we enter ctrl + z then output is 0 , if we type normal characters output is 1

    return 0;
}