#include <stdio.h> 

int getDouble(int n) {
    int result = n * 2;
    return result; // we were returning the memory address of result but the value of result will be destroyed the moment this function ends 
}

int main() {
    int p = getDouble(10);
    printf("%d\n", p); // printf was used without using stdio.h first 
    return 0;
}