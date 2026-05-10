#include <stdio.h>

int fibonacci() {
    static int prev1 = 1;
    static int prev2 = 0;
    int next = prev1 + prev2;
    prev2 = prev1;
    prev1 = next;
   
    return next;
}

int main () {
    printf("%d ", fibonacci());
    printf("%d ", fibonacci());
    printf("%d ", fibonacci());
    printf("%d ", fibonacci());
    printf("%d ", fibonacci());
    printf("%d ", fibonacci());
    printf("%d ", fibonacci());
    printf("%d ", fibonacci());

    return 0;
}
