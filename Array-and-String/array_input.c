#include <stdio.h>

int main () {

    int num[5] = {0};
    for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++) {
        printf("Enter Number: ");
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++) {
        printf("%d ", num[i]);
    }

    return 0;
}