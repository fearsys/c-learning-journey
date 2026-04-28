#include <stdio.h>
#include <string.h>

struct College {
    char collegeName[50];
    int collegeRank;
    
    struct Student {
        char name[30];
        int age;
        int roll;
    }student1;
};

int main () {

    struct College fit = {"Futuristic Information Technology", 3, "Praveen", 22, 29};
    printf("%s %d %s %d %d\n", fit.collegeName, fit.collegeRank, fit.student1.name, fit.student1.age, fit.student1.roll);
    strcpy(fit.collegeName, "KBC Technology");
    printf("%s %d %s %d %d\n", fit.collegeName, fit.collegeRank, fit.student1.name, fit.student1.age, fit.student1.roll);
    strcpy(fit.student1.name, "Jai");
    printf("%s %d %s %d %d\n", fit.collegeName, fit.collegeRank, fit.student1.name, fit.student1.age, fit.student1.roll);

    return 0;

}