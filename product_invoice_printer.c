#include <stdio.h>

int main () {

    char item1[] = "Notebook";
    char item2[] = "Pen";
    char item3[] = "Backpack";

    float price1 = 3.5;
    float price2 = 0.99;
    float price3 = 24.0;

    int qty1 = 4;
    int qty2 = 10;
    int qty3 = 1;

    printf("====================================================\n");
    printf("                    SHOP INVOICE                    \n");
    printf("====================================================\n");
    printf("%-12s  %5s  %7s\n", "ITEM", "QTY", "PRICE"); // we can also do something like this 
    printf("----------------------------------------------------\n");
    printf("%-12s  %5d  %+07.2f\n", item1, qty1, price1);
    printf("%-12s  %5d  %+07.2f\n", item2, qty2, price2);
    printf("%-12s  %5d  %+07.2f\n", item3, qty3, price3);
    printf("====================================================\n");
    return 0;
}