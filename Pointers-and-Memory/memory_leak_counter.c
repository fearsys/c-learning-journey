#include <stdio.h>
#include <stdlib.h>

int alloc_count = 0;
int free_count = 0;

void* my_malloc(size_t size) {
    alloc_count++;
    return malloc(size);
}

void* my_calloc(size_t n, size_t size) {
    alloc_count++;
    return calloc(n, size);
}

void my_free(void* ptr) {
    if (ptr != NULL) {
        free_count++;
        free(ptr);
    }
}

int main() {
    int *a = my_malloc(sizeof(int));
    int *b = my_malloc(sizeof(int));
    int *c = my_malloc(sizeof(int));

    int *d = my_calloc(5, sizeof(int));
    my_free(a);
    my_free(b);
    my_free(c);
    
    if (alloc_count == free_count) {
        printf("%d allocations, %d frees\n", alloc_count, free_count);
    }
    else {
        printf("MEMORY LEAK DETECTED: %d allocations, %d frees\n", alloc_count, free_count);
    }
    return 0;
}