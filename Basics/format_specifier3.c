#include <stdio.h>

int main () {
    
    float price1 = 19.99;
    float price2 = 102.34;
    float price3 = 100.00;
    
    printf("%f\n", price1); // Be default C is printing 6 digits after decimal
    printf("%f\n", price2);
    printf("%f\n", price3); 
    printf("----------------------------------------------------------\n");
    printf("%7.2f\n", price1); // This will print only 2 digits after decimal while taking up only 7 space each
    printf("%7.2f\n", price2);
    printf("%7.2f\n", price3);
    printf("----------------------------------------------------------\n");
    printf("%07.2f\n", price1); // This will print only 2 digits after decimal while taking up only 7 space each and filling the rest of the space with 0
    printf("%07.2f\n", price2);
    printf("%07.2f\n", price3);
     printf("----------------------------------------------------------\n");
    printf("%+07.2f\n", price1); // This will print only 2 digits after decimal while taking up only 7 space each and filling the rest of the space with 0 with an additional number sign as well
    printf("%+07.2f\n", price2);
    printf("%+07.2f\n", price3);
    printf("%0+7.2f\n", price1); // The order of the flag doesn't matter

    return 0;
}