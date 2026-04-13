#include <stdio.h>

int main () {

    int numbers[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    char letters[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    char name[] = "Praveen Kumar";

    printf("Total size of numbers array: %d\n", sizeof(numbers));
    printf("Size of individual elements in numbers array: %d\n", sizeof(numbers[0]));
    printf("Number of elements: %d\n", sizeof(numbers) / sizeof(numbers[0]));
    printf("------------------------------------------------------\n");

    printf("Total size of letters array: %d\n", sizeof(letters));
    printf("Size of individual elements in letters array: %d\n", sizeof(letters[0]));
    printf("Number of elements: %d\n", sizeof(letters) / sizeof(letters[0]));
    printf("------------------------------------------------------\n");

    printf("Total size of name array: %d\n", sizeof(name));
    printf("Size of individual elements in name array: %d\n", sizeof(name[0]));
    printf("Number of elements: %d\n", sizeof(name) / sizeof(name[0])); // Space + null element is included
    printf("------------------------------------------------------\n");

    int TotalNumbers = sizeof(numbers) / sizeof(numbers[0]);
    int TotalLetters = sizeof(letters) / sizeof(letters[0]);
    // No need for TotalName as size of name array = number of elements in name array

    for (int i = 0; i < TotalNumbers; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    for (int i = 0; i < TotalLetters; i++) {
        printf("%c ", letters[i]);
    }
    printf("\n");

    for (int i = 0; i < sizeof(name); i++) {
        printf("%c", name[i]);
    }
    printf("\n");


    return 0;
}