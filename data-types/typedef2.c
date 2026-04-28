#include <stdio.h>
// using typedef for a structure
typedef struct Student {
    int age;
    int marks;
} Stu;

int main () {

    Stu a = {22, 94};
    Stu b = {21, 67};

    printf("%d %d\n", a.age, a.marks);
    printf("%d %d\n", b.age, b.marks);

    return 0;

}