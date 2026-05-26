#include <stdio.h>

void minMax2(int a, int b, int *min, int *max);

int main() {
    int a = 25;
    int b = 10;

    int min;
    int max;

    minMax2(a, b, &min, &max);

    printf("Min = %d\n", min);
    printf("Max = %d\n", max);

    return 0;
}

void minMax2(int a, int b, int *min, int *max) {
    if(a > b) {
        *max = a;
        *min = b;
        return;
    }
    else {
        *max = b;
        *min = a;
    }
}