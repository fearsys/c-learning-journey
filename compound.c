#include <stdio.h>
#include <math.h>

int main () {

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;
    
    printf("Principal: ");
    scanf("%lf", &principal);
    printf("Rate (%%): ");
    scanf("%lf", &rate);
    rate = rate/ 100;
    printf("Time (in year): ");
    scanf("%d", &years);
    printf("Number of times it is compounded: ");
    scanf("%d", &timesCompounded);

    total = principal * pow(1 + rate / timesCompounded, timesCompounded * years);
    printf("Total: $%.2f\n", total);
    return 0;

}