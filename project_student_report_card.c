#include <stdio.h>
#include <stdbool.h>

int main () {
    char name[] = "Praveen Kumar";
    int age = 22;
    char ID = 'A';
    bool isEnrolled = true;
    // Store 3 subject marks as floats (e.g., Math, Science, English) — values between 0 and 100
    float math = 83.72;
    float sci = 77.50;
    float eng = 98.75;
    double average = ((double)math + sci + eng) / 3.0; // previously I did not use casting which resulted in the storage of a low precision result in a high precision box
    printf("===== STUDENT'S REPORT CARD =====\n");
    printf("Name:      %s\n", name);
    printf("Age:       %d\n", age);
    printf("ID:        %c\n", ID);
    printf("Enrolled:  %d\n", isEnrolled);
    printf("\n");
    printf("Maths:     %.2f\n", math);
    printf("Science:   %.2f\n", sci);
    printf("English:   %.2f\n", eng);
    printf("\n");
    printf("Average:   %.15f\n", average);
    printf("=================================\n");
    /*
    This is a multi line comment
    Anything written inside this won't be printed on the screen or interfere with the code
    */
   return isEnrolled; // This will return 1 as isEnrolled is set to true, OS will see it as a failed program 
}