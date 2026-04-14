#include <stdio.h>

int main () {

    char fruits[][10] = {"Apple", "Banana", "Coconut", "tennnnnnnn" ,"nineeeeee"}; // This means the fruit name can only have 9 letters + 1 null terminator

    int size = sizeof(fruits) / sizeof(fruits[0]);
    printf("%d\n", sizeof(fruits)); // 10 size * 3 = 30 
    printf("%d\n", sizeof(fruits[0])); // we have already declared that every row must be of size 10 so it prints 10. the memory bucket of row 

    printf("%c\n", fruits[0][0]); // Only prints A
    printf("%c\n", fruits[1][0]); // Prints B of Banana
    printf("%s\n", fruits[0]); // Prints Apple coz we are using %s and printing fruits [0]
    printf("%s\n", fruits[1]);

    fruits[0][0] = 'Z'; // changing the characters 
    fruits[1][0] = 'Z';
    fruits[2][0] = 'Z';
    printf("%s\n", fruits[0]);
    printf("%s\n", fruits[1]);
    printf("%s\n", fruits[2]);
    printf("%s\n", fruits[3]); // printing tennnnnnnnnineeeeee coz we wrote a 10 letter word in a 10 row size and hence computer was not able to find the null terminator and it bled into the next row. this is an error and should be avoided. 
    printf("%s\n", fruits[4]);


    return 0;
}