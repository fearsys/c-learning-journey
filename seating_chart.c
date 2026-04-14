#include <stdio.h>

void margineLine() {
    printf("==============================\n");
}

int main () {

    int seats[][5] = {
    {1, 1, 0, 1, 0},
    {0, 1, 1, 1, 0},
    {1, 0, 0, 1, 1},
    {0, 0, 1, 0, 1}
    };
    
    int countAvailable = 0;
    int countOccupied = 0;
    int totalSeats = 0; // can be written as count available + count occupied later on but i have used a bit unconventional method here

    margineLine();
    printf("        CINEMA SEATING\n");
    margineLine();
    printf("     ");
    for (int i = 0; i < sizeof(seats[0]) / sizeof(seats[0][0]); i++) {
        printf("C%-3d", i+1);
    }
    printf("\n");

    for(int i = 0; i < sizeof(seats) / sizeof(seats[0]); i++) {
        printf("R%d:  ", i+1);
        for(int j = 0; j < sizeof(seats[0]) / sizeof(seats[0][0]); j++) {
            if (seats[i][j] == 0) {
                printf("[ ] ");
                countAvailable++;
                totalSeats++;
            }
            else {
                printf("[X] ");
                countOccupied++;
                totalSeats++;
            }
        }
        printf("\n");
    }

    margineLine();

    printf("Total Seats:     %d\n", totalSeats);
    printf("Occupied Seats:  %d\n", countOccupied);
    printf("Available Seats: %d\n", countAvailable);

    margineLine();

    return 0;

}