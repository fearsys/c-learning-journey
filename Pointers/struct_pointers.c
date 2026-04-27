#include <stdio.h>
#include <string.h>

typedef struct Student {
    char name[20];
    int age;
    int marks;
    void (*setAge)(struct Student*, int);  // function pointer inside struct!
    void (*show)(struct Student*);
} Student;

void setAge (Student* s, int age) {
    s-> age = age;
}

void show(Student* s) {
    printf("Name: %s\nAge: %d\nMarks: %d\n", s->name, s->age, s->marks);
}

void constructStudent(Student *s) {
    s->age = 0;
    s->marks = 0;
    s->setAge = setAge;
    s->show = show;
}

int main () {

    Student s1;
    constructStudent(&s1);
    strcpy(s1.name, "Praveen");
    s1.setAge(&s1, 22);
    s1.show(&s1);

    return 0;
}