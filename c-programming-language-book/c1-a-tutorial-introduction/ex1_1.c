/* Exercise 1-1. Run the ``hello, world'' program on your system. Experiment with leaving out
parts of the program, to see what error messages you get */
#include <stdio.h>

int main () {
    printf("Hello World");
    return 0;
}
// If int is not written before main the program is not running accurately; return type defaults to 'int'
