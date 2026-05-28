#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    float gpa;
} Student;

int main() {
    Student *cls = calloc(4 , sizeof(Student));
    if (cls == NULL) {
        return 1;
    }
    cls[1].id = 101;
    cls[1].gpa = 7.5;
    cls[3].id = 202;
    cls[3].gpa = 9.1;

    for (int i = 0; i < 4; i++) {
        printf("Student %d: id=%d, gpa=%.2f\n", i, cls[i].id, cls[i].gpa);
    }
    
    free(cls);
    cls = NULL;
    return 0;
}