#include <stdio.h>

typedef int Number; // Used to give a nickname to a data type
typedef char Letter;
typedef char Line[20];

int main () { // can also be written as Number main ()  

    Number x = 10;
    Number y = 20;
    printf("%d\n", x + y);
    Letter myLetter = 'x';
    printf("%c\n", myLetter);
    Line myLine = "Hello World";
    printf("%s\n", myLine);

    return 0;

}