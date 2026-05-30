#include <stdio.h>
#include <stdlib.h>

int *stack = NULL; // an array on heap called stack 
int top = 0; // how many items are currently in it
int capacity = 2; // how many items it can hold right now

void push(int val) {
    if (top >= capacity) {
        int *temp = realloc(stack,(capacity + 1) * sizeof(int));
        if (temp == NULL) {
            return;
        }
        stack = temp;
        stack[top] = val;
        top++;
        capacity++;
    }
    else {
        stack[top] = val;
        top++;
    }
}
int pop() {
    top--;
    return stack[top];
}
void print_stack() {
    printf("Stack: ");
    for (int i = 0; i < top; i++) {
        printf("%d ", stack[i]);
    }
}

int main() {
    stack = malloc(capacity *sizeof(int));
    if (stack == NULL) {
        return 1;
    }
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    pop();
    pop();
    print_stack();
    free(stack);
    stack = NULL;
    return 0;
}