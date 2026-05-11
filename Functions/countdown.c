#include <stdio.h>

int countDown(int n);

int main () {
    int input = 5;
    printf("Input: %d\n", input);
    printf("Output: \n");
    printf("Count: %d\n", countDown(input));
    return 0;
}

int countDown(int n) {
    if(n == 0) return 0;
    printf("%d\n", n);
    return 1 + countDown(n - 1);
}