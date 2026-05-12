#include <stdio.h>

void applyAndPrint(int arr[], int size, int (*transform)(int));
int doubled(int n);
int negate(int n);

int main () {
    int num1[] = {1, 2, 3, 4, 5};
    int num2[] = {1, 2, 3, 4, 5};
    int size = sizeof(num1) / sizeof(num1[0]);
    printf("Doubled: ");
    applyAndPrint(num1, size, doubled);
    printf("Negated: ");
    applyAndPrint(num2, size, negate);

    return 0;
}
int doubled(int n) {
    return n * 2;
}
int negate(int n) {
    return -n;
}
void applyAndPrint(int arr[], int size, int (*transform)(int)) {
    for (int i = 0; i < size; i++) {
        arr[i] = transform(arr[i]);
        printf("%d ", arr[i]);
    }
    printf("\n");
}