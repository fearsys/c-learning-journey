#include <stdio.h>


void marginer() {
    int NumberOfDashes = 40;
    for (int i = 0; i < NumberOfDashes; i++) {
        printf("-");
    }
    printf("\n");
}

int main () {

    int num [] [3] = {{1,2,3}}; // int num [] [] = {{1,2,3}}; will not work we have to specify the size of columns

    printf("%d\n", num[0][2]); // prints 3 
    printf("%d\n", num[0][3]); // prints garbage value
    marginer();
 
    
    char dialPad [][4] = {{'7', '8', '9'}, {'4', '5', '6'}, {'1', '2', '3'}, {'#', '.', '*'}};

    for(int i = 0; i < sizeof(dialPad)/ sizeof(dialPad[0]); i++) {
        for (int j = 0; j < sizeof(dialPad[0]) / sizeof(dialPad[0][0]); j++) {
            printf("%c ",dialPad[i][j]);
        }
        printf("\n");
    }

    return 0;
}