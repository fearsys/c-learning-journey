#include <stdio.h>

int main () {

    int value = 10;
    void *ptr = &value;
    printf("Value: %d\n", value);
    printf("Address: %p\n", ptr);
    printf("Value by deferencing: %d\n",  *(int *)ptr);

    return 0;

}