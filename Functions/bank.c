#include <stdio.h>

void bankAccount(float amount);

int main () {

    bankAccount(500);   // deposit
    bankAccount(200);   // deposit
    bankAccount(-150);  // withdraw
    bankAccount(-800);  // withdraw (should fail)
    bankAccount(0);     // check balance

    return 0;
}

void bankAccount(float amount) {
    static float balance = 0;
    if (amount > 0) {
        balance += amount;
        printf("Deposited %.2f. ",amount);
        printf("Balance: %.2f\n", balance);
    }
    else if (amount < 0) {
        if (balance > amount*-1) {
            balance += amount;
            printf("Withdrew %.2f. ",amount*-1);
            printf("Balance: %.2f\n", balance);
        }
        else printf("Insufficient funds Balance: %.2f\n", balance);
    }
    else if (amount == 0) {
        printf("Current balance: %.2f\n", balance);
    }
}