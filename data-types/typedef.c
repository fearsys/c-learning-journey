#include <stdio.h>
// using typedef 
typedef int integer; // call int as integer 
typedef float floating;
typedef char character;

int main () {
    
    integer x = 10;
    floating y = 20.323;
    character z = 'z';

    printf("%d %.3f %c\n", x, y, z);

    return 0;
}