#include <stdio.h>

struct Student {
    char name[30];
    int age;
    int marks;
};

int main () {
    struct Student s1 = {"Praveen", 22, 89}; // initializing everything in a sequence
    printf("%s %d %d\n", s1.name, s1.age, s1.marks);
    struct Student s2 = {.age = 20, .name = "Rahul", .marks = 88}; // initializing in whichever manner I want 
    printf("%s %d %d\n", s2.name, s2.age, s2.marks);
    struct Student s3 = {"Adi"}; // only initialized the name rest are 0 by default 
    printf("%s %d %d\n", s3.name, s3.age, s3.marks);
    s3.age = 21; // initializing individual members of the structure
    s3.marks = 97;
    printf("%s %d %d\n", s3.name, s3.age, s3.marks);
    struct Student s4 = s3; // copy structure
    printf("%s %d %d\n", s4.name, s4.age, s4.marks);
    
    return 0;
}