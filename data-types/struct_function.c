#include <stdio.h>

struct Object {
    int x;
};

void valueChanger (struct Object a, struct Object *b) {
    a.x++;
    b->x++;
}

int main () {

    struct Object a = {10};
    struct Object b = {10};
    printf("Value : %d %d\n", a.x, b.x);

    valueChanger(a, &b); // passing by value vs passing by pointers

    printf("Value : %d %d\n", a.x, b.x);


    return 0;
}