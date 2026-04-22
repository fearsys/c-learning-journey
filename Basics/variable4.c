#include <stdio.h> 
int main () {
    // Using Char
    char grade = 'A';
    char symbol = '@';
    char currency = '$';
    char random = 125;
    printf("Grade: %c\n", grade); //%c is the placeholder for data related to Char  
    printf("Symbol: %c\n", symbol);
    printf("Currency: %c\n", currency);
    printf("Random : %c\n", random); // Random character I printed using number coz I used %c so it will print character
    printf("Random %d\n", random); // This is printing the number itself coz I used %d
    return 0;
}