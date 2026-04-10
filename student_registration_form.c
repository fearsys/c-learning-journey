#include <stdio.h>
#include <string.h>

int main () {

    char name[50] = "";
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    int stdId = 0;

    printf("Full name: " );
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    printf("Age: ");
    scanf("%d", &age);
    printf("gpa: ");
    scanf("%f", &gpa);
    printf("Grade: ");
    scanf(" %c", &grade);
    printf("Student ID: ");
    scanf("%d", &stdId);

    printf("==============================\n     REGISTRATION SUMMARY\n==============================\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("GPA: %.2f\n", gpa);
    printf("Grade: %c\n", grade);
    printf("Student ID: %05d\n", stdId);
    printf("==============================\n");
    return 0;

}