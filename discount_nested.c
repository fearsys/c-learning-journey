#include <stdio.h>
#include <stdbool.h>

int main () {

    float basePrice = 10.0f;
    float finalPrice = 0.0f;
    float youPay = 0.0f;
    int discount = 0;
    int surcharge = 0;
    bool isStudent = false;
    bool isSenior = false;
    bool isWeekend = false;
    int isStudentInput = 0;
    int isSeniorInput = 0;
    int isWeekendInput = 0;

    printf("Are you a student? (1 = yes, 0 = no)");
    scanf("%d", &isStudentInput);
    isStudent = isStudentInput;
    printf("Are you a Senior (1 = yes, 0 = no)");
    scanf("%d", &isSeniorInput);
    isSenior = isSeniorInput;
    printf("Is it a weekend? (1 = yes, 0 = no)");
    scanf("%d", &isWeekendInput);
    isWeekend = isWeekendInput;

    if (isStudent) {
        if(isSenior) {
            finalPrice = basePrice * 0.7;
            discount = 30;
        }
        else {
            finalPrice = basePrice * 0.9;
            discount = 10;
        }
    }
    else if (isSenior) {
        finalPrice = basePrice * 0.8;
        discount = 20;
    }
    else {
        finalPrice = basePrice;
        discount = 0;
    }
    if (isWeekend) {
        youPay = finalPrice * 1.05;
        surcharge = 5;
    }
    else {
        youPay = finalPrice;
        surcharge = 0;
    }
    
    printf("==============================\n      MOVIE TICKET PRICE\n==============================\n");
    printf("Base Price:    $%.2f\nDiscount:      %d%%\nFinal Price:   $%.2f\nWeekend surcharge applied: +%d%%\nYou pay:       $%.2f\n", basePrice,discount, finalPrice, surcharge,youPay);
    printf("==============================\n");

    return 0;
    // I could have used a if statement to only printf the weekend surcharge line whenever its weekend else leave it 
    // another thing upon review I found that I could have used scanf %d for bool as bool takes 1 or 0 as input
}