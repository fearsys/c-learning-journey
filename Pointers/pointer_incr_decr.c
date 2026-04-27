#include <stdio.h>

int main () {

    int value = 10;
    printf("Size of int is : %zu\n", sizeof(int));
    int *pvalue = &value;
    printf("Address of value is : %d\n", pvalue);
    pvalue++;
    printf("Address of value++ is : %d\n", pvalue); // increased by 4 , coz size of int is 4 

    char key = 'p';
    printf("Size of char is : %zu\n", sizeof(char));
    char *pkey = &key;
    printf("Address of key is : %d\n", pkey);
    pkey++;
    printf("Address of key++ is : %d\n", pkey);
    pkey--;
    printf("Address of key-- is : %d\n", pkey);

    return 0;

}