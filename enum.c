#include <stdio.h>

typedef enum {
    MONDAY = 1 , TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY
}Day;

int main () {

    Day today = SATURDAY; // IF WE DID NOT USE TYPEDEF WE HAD TO WRITE ENUM DAY TODAY = ....
    printf("You are on day %d\n",today);
    (today == SATURDAY || today == SUNDAY) ? printf("Weekend\n") : printf("Weekday\n");

    return 0;

}