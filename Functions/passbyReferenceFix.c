#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void addBonus(int *salary, int bonus) {
    *salary = *salary + bonus;
}

int main() {
    int x = 10, y = 20;
    swap(&x, &y);
    printf("After swap: x=%d, y=%d\n", x, y);   

    int pay = 50000;
    addBonus(&pay, 5000);
    printf("After bonus: pay=%d\n", pay);       

    return 0;
}