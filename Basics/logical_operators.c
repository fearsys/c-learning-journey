#include <stdio.h>
#include <stdbool.h>

int main () {

    // logical operators = Used to combine or modify boolean expressions.
    // && = AND
    // || = OR
    // ! = NOT
    bool isStudent = false;
    bool isSenior = true;
    if (isStudent && isSenior) {
        printf("You are a senior student\n");
    }
    else if (isStudent || isSenior) {
        printf("YOu are either a senior or a student\n");
    }
    if(!isSenior) {
        printf("You are not a senior\n");
    }
    if(!isStudent) {
        printf("You are not a student\n");
    }

    return 0;

}