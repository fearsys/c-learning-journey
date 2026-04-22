#include <stdio.h>

int main () {

    // Using a nested loop to print a rectangular shape of symbol of choice
    int columns = 0;
    int rows = 0;
    char symbol = '\0';

    printf("Rows: (Left to right): ");
    scanf("%d", &rows);
    printf("Columns: (Top to bottom): ");
    scanf("%d", &columns);
    printf("Symbol of choice: ");
    scanf(" %c", &symbol);

    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
             printf("%c", symbol);
        }
        printf("\n");       
    }

    return 0;

}