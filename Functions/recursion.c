#include <stdio.h>
//calculate sum upto n numbers
int sum (int n);
int main () {

    printf("Sum : %d\n", sum(5));
    return 0;
}
int sum(int n) {
    if (n == 1) return 1;
    return n + sum(n-1);
}