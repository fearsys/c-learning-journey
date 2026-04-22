#include <stdio.h>
int main () {
    // We will be using an array of Character called String here. C does not have a built in String Data type.
    char name[] = "Praveen Kumar"; // When we were using Char we used ' single qoutation but here we are using doulbe qoutation
    char food[] = "Pizza, burgers, Chicken nuggets";
    char email[] = "fake1234@gmail.com";

    printf("Your name is : %s\n", name); // %s placeholder for String i.e an array of characters 
    printf("Your favourite foods are : %s\n", food);
    printf("Your email is : %s\n", email);
    
    return 0;
}