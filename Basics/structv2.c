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
    
    Student student1 =
    {
        22, 7.45, "Praveen Kumar", true    /* data */
    };

    Student student2 = 
    {
        20, 7.14, "Aditya Keshri", false
    };
    
     Student student3 = 
    {
        20, 8.45, "Jai Verma", true
    };
    
    Student student4 = {0};
    strcpy(student4.name, "xyz");
    student4.age = 19;
    student4.gpa = 9.0;
    student4.isFulltime = true;

    detailPrinter(student1);
    margin();
    detailPrinter(student2);
    margin();
    detailPrinter(student3);
    margin();
    detailPrinter(student4);
    margin();
    
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