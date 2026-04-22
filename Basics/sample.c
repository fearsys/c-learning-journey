#include <stdio.h>
#include <float.h>
#include <ctype.h>

void marginer() {
    int NumberOfDashes = 40;
    for (int i = 0; i < NumberOfDashes; i++) {
        printf("-");
    }
    printf("\n");
}
int main () {

    printf("%d %d\n", FLT_MAX, FLT_MIN);
    marginer();

    int array[5] = {0};
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    marginer();

    char abc = 'q';
    abc = toupper(abc);
    printf("%c\n", abc);

    marginer();

    return 0;

}