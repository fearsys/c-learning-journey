#include <stdio.h>

struct child {
    int a;
};

struct parent {
    struct child z;
    int b;
    int c;
};

int main () {

    struct parent p = {10,11,12};
    printf("%d %d %d\n",p.b, p.c, p.z );

    return 0;

}