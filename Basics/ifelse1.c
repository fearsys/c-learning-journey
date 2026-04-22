#include <stdio.h>
#include <math.h>

int main () {

    int age = 0;
    printf("What is your age: ");
    scanf("%d", &age);

    if (age < 0) {
    printf("You are not born yet\n");
    }
    else if (age == 0) {
    printf("You are a newborn\n");
    }
    else if (age < 18) {
    printf("You are a child\n");
    }
    else if (age >= 65) {
    printf("You are a senior\n");
    }
    else {
    printf("You are an adult\n");
    }

    return 0;
}