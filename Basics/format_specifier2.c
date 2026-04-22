#include <stdio.h>

int main () {
    
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    printf("%d\n", num1); // Printing default 
    printf("%d\n", num2);
    printf("%d\n", num3);
    printf("----------------------------------------------------------------\n");
    printf("%4d\n", num1); // Using 4 character spaces
    printf("%4d\n", num2);
    printf("%4d\n", num3); 
    printf("----------------------------------------------------------------\n");
    printf("%-4d\n", num1); // Using 4 character spaces but alignment is reversed due to minus sign 
    printf("%-4d\n", num2);
    printf("%-4d\n", num3);
    printf("----------------------------------------------------------------\n");
    printf("%04d\n", num1); // Use 4 character spaces and fill the empty space using 0
    printf("%04d\n", num2);
    printf("%04d\n", num3);
    printf("----------------------------------------------------------------\n");
    printf("%+d\n", num1); // Print with sign
    printf("%+d\n", num2); // This will print +10 and the next line will print +100. 
    printf("%+d\n", num3);
    printf("----------------------------------------------------------------\n");
    return 0;
}