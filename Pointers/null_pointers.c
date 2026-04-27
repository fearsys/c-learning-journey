#include <stdio.h>

int main () {

    int value = 10;
    int *ptr = &value;
    printf("Value: %d\n", value);
   //  printf("Pointer: %x\n", ptr); // this will render 0
   if (ptr == NULL) {
    printf("Null pointer");
   }
   else {
    printf("Memory address: %p\n", (void *)ptr);
   }
   ptr = NULL;
    if (ptr == NULL) {
    printf("Null pointer");
   }
   else {
    printf("Memory address: %p\n", (void *)ptr);
   }

    return 0;

}