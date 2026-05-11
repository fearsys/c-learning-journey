#include <stdio.h>

int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    for (int i = 0; i <= 7; i++) { // if we do for 50 it will take a lot of time suggesting that recursion is slower 
        printf("fib(%d) = %d\n", i, fib(i));
    }
    return 0;
}