#include <stdio.h>

int add (int a , int b) {
    return a + b;
}

void printer(int a) {
    for (int i = 0; i < a; i++) {
        printf("-");
    }
} 

int main () {

    int (*fptr)(int , int);
    fptr = &add;
    printf("%d\n", fptr(10,5));
    void (*fprinter)(int);
    fprinter = printer;
    fprinter(10);

    return 0;

}