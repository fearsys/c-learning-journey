#include <stdio.h>
#include <math.h>

const int numberOfCompounding = 1;

void printHeader (double principal, double rate) {
        printf("==============================\n     COMPOUND INTEREST\n==============================\n");
        printf("Principal:  $%.2f\nRate:       %.2f%%\n", principal, rate);
        printf("==============================\nYear    Amount\n------------------------------\n");
}

int main () {

    double principal = 0.0;
    double rate = 0.0;
    int year = 0;
    double amount = 0.0;

    printf("Principal: ");
    scanf("%lf", &principal);
    printf("Rate: ");
    scanf("%lf", &rate);
    printf("Time period in years: ");
    scanf("%d", &year);

    printHeader(principal, rate);
    rate /= 100;

    for (int i = 1; i <= year; i++) {
         amount = principal * pow(1 + rate/numberOfCompounding, numberOfCompounding * i);
         printf("%4d       $%10.2f\n",i , amount);
    }

    printf("==============================\n");

    return 0;

}

    