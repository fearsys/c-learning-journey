#include <stdio.h>

int main() {
    int marks[5] = {55, 72, 88, 91, 64};
    int *p = marks;
    int *end = marks + 5;
    int highest = *p;

    while (p < end) {
        printf("%d ", *p);
        if (*p > highest) {
            highest = *p;
        }
        p++;
    }
    printf("\n");

    printf("Highest: %d\n", highest);
    return 0;
}