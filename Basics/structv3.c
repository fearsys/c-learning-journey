#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
    int age;
    float gpa;
    char name [20];
    bool isFulltime;

} Student;

void detailPrinter (Student student1);
void margin();

int main () {
    
    Student students[] = {
    {22, 7.45, "Praveen Kumar", true},
    {20, 7.14, "Aditya Keshri", false},
    {20, 8.45, "Jai Verma", true},
    {19, 9.0, "xyz", true}
    };

    int size = sizeof(students) / sizeof(students[0]);

    for (int i = 0; i < size; i ++) {
        detailPrinter(students[i]);
        margin();
    }
 
    return 0;

}

void detailPrinter (Student student1) {
    printf("%d\n", student1.age);
    printf("%.2f\n", student1.gpa);
    printf("%s\n", student1.name);
    printf("%s\n", (student1.isFulltime == true) ? "Full time Student" : "Part time student");
}

void margin() {
    printf("------------------------------------\n");
}