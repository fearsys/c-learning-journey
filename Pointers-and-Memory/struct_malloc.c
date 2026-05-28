#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    float gpa;
} Student;

int main() {
    Student *s = malloc(sizeof(Student));
    if (s == NULL) {
        return 1;
    }
    s->id = 1;
    strcpy(s->name, "Ravi");
    s->gpa = 8.75;
     
    printf("ID: %d | Name: %s | GPA: %.2f\n", s->id, s->name, s->gpa);

    free(s);
    s = NULL;
    
    return 0;
}