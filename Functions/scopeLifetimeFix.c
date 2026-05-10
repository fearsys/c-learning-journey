#include <stdio.h>


int compute(int x) {
    return  x * x;
}

int main() {
    int a = 5;
    compute(a);
    printf("Square of %d is %d\n", a, compute(a));

    int msg = 0;
    for (int i = 0; i < 3; i++) {
        msg = i + 1;
    }
    printf("Last msg: %d\n", msg);

    int bonus = 0;
    if (a > 3) {
        bonus = 100;
    }
    printf("Bonus: %d\n", bonus);

    return 0;
}