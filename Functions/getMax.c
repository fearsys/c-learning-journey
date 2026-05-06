#include <stdio.h>

int getMax(int, int);

int main () {

    int result = getMax(44,78);
    printf("Max is: %d\n", result);

}
int getMax (int a , int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}