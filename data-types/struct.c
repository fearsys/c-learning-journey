#include <stdio.h>

struct Number{
    int num;
};

int main () {
    struct Number x = {30};
    printf("%d\n", x.num);
    x.num = 20;
    printf("%d\n", x.num);
   
    return 0;
}