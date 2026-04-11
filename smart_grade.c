#include <stdio.h>
#include <string.h>
#include <math.h>

int main () {

    const double fgrade = 60; // will not be used only writing this for experimentation
    char name[50] = "";
    double math = 0.0;
    double sci = 0.0;
    double eng = 0.0;
    double average = 0.0;
    char grade = '\0';
    double rounded = 0.0;

    printf("Name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    printf("Maths marks: ");
    scanf("%lf", &math);
    printf("Science marks: ");
    scanf("%lf", &sci);
    printf("English marks: ");
    scanf("%lf", &eng);

    average = ((double)math + eng + sci)/ 3.0;
    rounded = round(average);
    printf("==============================\n        GRADE REPORT\n==============================\n");
    printf("Name: %s\nMaths: %.2f\nScience: %.2f\nEnglish: %.2f", name, math, sci, eng);
    printf("\n");
    printf("Average: %.2f\nRounded: %.2f\n", average, rounded);

    if (rounded >= 90 ) {   
        grade = 'A';
    }
    else if (rounded >= 80) {
        grade = 'B';
    }
    else if (rounded >= 70) {
        grade = 'C';
    }
    else if (rounded >= 60) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }
    printf("Grade: %c\n", grade);
    printf("==============================\n");

    return 0;
}