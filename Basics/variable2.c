#include <stdio.h>

int main () {
    float gpa = 7.3;
    float price = 45.23;
    float temp = 21.33;

    printf("Your gpa is : %f\n", gpa); 
    printf("GPA : %.2f\n", gpa);
    printf("Price: %.2f\n", price);
    printf("Temperature: %.2f°C\n", temp); // alt + 0176 gave me ° symbol, cool!! It is not showing properly in my terminal
    // .1 .2 .3 we can use this to change the precision of the data 
    // %f is a placeholder for the float data type
    // but this is printing 7.300000 many zeros why? 
    return 0;  // When I wrote return 1 , my code still worked but the operating system got a message that program ended with an error.
    /* 
    The Exit Status Code
    The int in int main() stands for integer. This means the function must give a number back
    to the system when it finishes.
    0 means SUCCESS: By convention, returning zero tells the computer, 
    "The program finished without any errors."
    Any other number (1, 2, 3, etc.) means FAILURE: If the program crashes or hits an error, 
    it can return a different number to tell the system what went wrong.
    */
    // echo $LASTEXITCODE when I used this just after program ended, I could see the output as 0 or any other number, which is written after the return...
    printf("GPA : %.1f", gpa); // This will not be executed because we have already writte return 0, so the program has ended succesfully
}