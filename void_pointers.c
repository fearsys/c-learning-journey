#include <stdio.h>

int main () {

    void *vp; // void pointers can be used to access any type of data as long as we typecast it 
    int a = 5;
    float b = 1.56;
    char ch = 'c';

    vp = &a;
    printf("a = %d\n", * (int *)vp);
    vp = &b;
    printf("b = %.2f\n", * (float *)vp);
    vp = &ch;
    printf("ch = %c\n", * (char *)vp);
    return 0;

}