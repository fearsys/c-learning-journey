#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
    int age;
    float gpa;
    char name [20];
    bool isFulltime;

} Student;

int main () {
    
    Student student1 =
    {
        22, 7.45, "Praveen Kumar", true    /* data */
    };

    Student student2 = 
    {
        20, 7.14, "Aditya Keshri", false
    };
    
    printf("%d\n", student1.age);
    printf("%.2f\n", student1.gpa);
    printf("%s\n", student1.name);
    printf("%s\n", (student1.isFulltime == true) ? "Full time Student" : "Part time student");

    printf("%d\n", student2.age);
    printf("%.2f\n", student2.gpa);
    printf("%s\n", student2.name);
    printf("%s\n", (student2.isFulltime == true) ? "Full time Student" : "Part time student");

    Student student3 = 
    {
        20, 8.45, "Jai Verma", true
    };

    printf("%d\n", student3.age);
    printf("%.2f\n", student3.gpa);
    printf("%s\n", student3.name);
    printf("%s\n", (student3.isFulltime == true) ? "Full time Student" : "Part time student");

    Student student4;

    printf("%d\n", student4.age); // will print garbage value or coz crash, bugs etc
    printf("%.2f\n", student4.gpa);
    printf("%s\n", student4.name);
    printf("%s\n", (student4.isFulltime == true) ? "Full time Student" : "Part time student");

    Student student5 = {0};

    printf("%d\n", student5.age); // will print empty values
    printf("%.2f\n", student5.gpa);
    printf("%s\n", student5.name);
    printf("%s\n", (student5.isFulltime == true) ? "Full time Student" : "Part time student");

    student5.age = 19;
    student5.gpa = 9.0;
    student5.isFulltime = true;

    printf("%d\n", student5.age); 
    printf("%.2f\n", student5.gpa);
    printf("%s\n", student5.name);
    printf("%s\n", (student5.isFulltime == true) ? "Full time Student" : "Part time student");

  
    
    strcpy(student5.name, "xyz");  // In c we can not directly assign directly to a character array
    printf("%s\n", student5.name);


    return 0;

}