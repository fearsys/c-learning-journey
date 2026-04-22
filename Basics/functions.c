#include <stdio.h>
#include <string.h>

void happyBirthday(char name[], int age) {
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear %s!", name);
    printf("\nHappy birthday to you!");
    printf("\nYou are %d years old!\n", age);
}

int main () {

    int age = 0;
    char name [50] = "";

    printf("Age: ");
    scanf("%d", &age);
    getchar();
    printf("Name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1 ] = '\0';

    happyBirthday(name, age);

}