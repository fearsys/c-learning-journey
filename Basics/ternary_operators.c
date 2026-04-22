#include <stdio.h>

void marginLine() {
    printf("===============================================\n");
}

int main () {

    int a = 10;
    int b = 9;

    printf("%d is greater than %d\n", (a > b) ? a : b, (a < b) ? a : b);

    marginLine();

    int c = 39;
    printf("%d is an %s number", c, (c % 2 == 0) ? "even" : "odd");

    return 0;

}