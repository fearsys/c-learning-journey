#include <stdio.h>
#include <windows.h>

int main () {

    for (int i = 10; i > 0 ; i--) {
        printf("%d\n", i);
        Sleep(800);
    }
    printf("HAPPY NEW YEAR");

    return 0;
}