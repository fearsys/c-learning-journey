#include <stdio.h>
#include <stdbool.h>

int main () {

    float price = 10.0;
    bool isStudent = true;
    bool isSenior = true;

    if (isStudent) {
        if (isSenior) {
            printf("You are a student and a Senior You will get 30 percent discount\n");
            price *= 0.7;
        }
        else {
            printf("You are a student you will get 10 percent discount\n");
            price *= 0.9;
        }
    }
    else if (isSenior) {
        printf("You are a senior you will get 20 percent discount\n");
        price *= 0.8;
    }
    printf("Price to pay %f", price);

    return 0;
}