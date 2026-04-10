#include <stdio.h>

int main() {

int itemA_qty = 5;
float itemA_price = 12.99;

int itemB_qty = 3;
float itemB_price = 7.50;

int discount = 10; // percentage

float totalA = itemA_price * itemA_qty;
float totalB = itemB_price * itemB_qty;

float grandTotal = totalA;
grandTotal += totalB;
float afterDiscount = grandTotal - (grandTotal * discount/100.00);

printf("=======================================\n");
printf("             SHOPPING CART             \n");
printf("=======================================\n");
printf("ITEM A: %d X $%.2f  =$%06.2f\n", itemA_qty, itemA_price, totalA);
printf("ITEM B: %d X $%.2f   =$%06.2f\n", itemB_qty, itemB_price, totalB);
printf("----------------------------------------\n");
printf("Subtotal:          =$%06.2f\n", grandTotal);
printf("Discount:          =%d%%\n", discount);
printf("Final:             =$%06.2f\n", afterDiscount);

int totalItems = itemA_qty + itemB_qty;
printf("Items: %d | Groups of 3: %d | Remainder: %d\n", totalItems, totalItems/3, totalItems%3);

return 0;
}