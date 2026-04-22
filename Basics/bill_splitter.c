#include <stdio.h>
#include <string.h>

void printHeader(char restaurant[], int people) {
    printf("==============================\nBILL SPLITTER\nRestaurant: %s\nPeople: %d\n==============================\n", restaurant, people);
}

void printSplit(char restaurant[], int people, float totalBill) {
    double eachPays = (double) totalBill / people;
    printf("Total Bill:  $%.2f\nEach pays:   $%06.2f\n==============================\n", totalBill, eachPays);
}

int main () {

    int people = 0;
    float totalBill = 0.0f;
    char restaurant[50] = "";

    printf("Restaurant Name: ");
    fgets(restaurant, sizeof(restaurant), stdin);
    restaurant[strlen(restaurant) - 1 ] = '\0';
    printf("Total Bill: ");
    scanf("%f", &totalBill);
    printf("Number of People: ");
    scanf("%d", &people);

    printHeader(restaurant,people);
    printSplit(restaurant,people,totalBill);

    return 0;
}

