#include <stdio.h>
#include <string.h>

int main () {

    int age = 0;
    float gpa = 0.0f; // float value
    char grade = '\0'; // Null terminator, acts as a stop sign
    char name[30] = "";

    printf("Enter your age: ");
    scanf("%d" , &age);
    printf("Enter your gpa: ");
    scanf("%f", &gpa);
    printf("Enter your grade: ");
    scanf(" %c" , &grade); // The extra space before %c solves input buffer problem 
    getchar(); // Clears the input buffer or any spaces or new line
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    // scanf("%s", &name);  This was not taking my full name 
    name[strlen(name) - 1] = '\0'; // A bit confusing for now, will read about this for sure
    
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("gpa : %.2f\n", gpa);
    printf("grade: %c\n", grade);  // printf("grade: %c\n", grade) was not working due to input buffer problem 
    
    return 0;

    // if we do printf("%d %f %c %s", age, gpa ,grade, name); without assigning any data, we can see garbage value 

}