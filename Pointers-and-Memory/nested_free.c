#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *name;
    int age;
} Person;

int main() {
    Person *p = malloc(sizeof(Person));
    if (p == NULL) {
        return 1;
    }
    p->name = malloc(30);
    if (p->name == NULL) {
        return 1;
    }
    strcpy(p->name, "Ananya");
    p->age = 20;
    printf("Name: %s | Age: %d\n", p->name, p->age);

    free(p->name);
    p->name = NULL;
    free(p);
    p = NULL;
    
    return 0;
}