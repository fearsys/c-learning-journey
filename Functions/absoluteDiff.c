#include <stdio.h>

int absoluteDiff(int a, int b);

int main () {

    int a = 10, b = 3;
    printf("diff(%d, %d) = %d  |  a=%d, b=%d unchanged\n",a, b, absoluteDiff(a,b), a, b );
    a = 3;
    b = 10;
    printf("diff(%d, %d) = %d  |  a=%d, b=%d unchanged\n",a, b, absoluteDiff(a,b), a, b );
    a = 7;
    b = 7;
    printf("diff(%d, %d) = %d  |  a=%d, b=%d unchanged\n",a, b, absoluteDiff(a,b), a, b );

    return 0;

}

int absoluteDiff(int a, int b) {
    if (a > b) return a - b;
    return b - a;
}