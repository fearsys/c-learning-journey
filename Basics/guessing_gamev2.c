#include <stdio.h>
#include <stdlib.h>
#include <time.h>


const int min = 1;
const int max = 100;

void gameStart() {
    printf("Game starting in...\n");
    int count = 10;
    while(count >= 0) {
        printf("%d ", count);
        count--;
    }
    printf("\nStart guessing! (1-100)\n\n");
}

int main () {
    srand(time(NULL));
    const int key = (rand() % (max - min + 1)) + min;
    int guess = 0;
    int count = 0;
    gameStart();    
    do {
        printf("Guess: ");
        scanf("%d", &guess);
        if (guess > key) {
            printf("Too High\n");
        }
        else if (guess < key) {
            printf("Too Low\n");
        }
        count ++;
        if (guess != key && count == 7) {
        printf("Game over! The number was %d\n", key);
        break;
        } 
    }while(guess != key);
        
        if (guess == key) {
            printf("congratulations you guessed the number\n");
            printf("It took you %d ", count);
            if (count == 1) {
            printf("try");
            }
            else {
                printf("tries");
            }
        }
    return 0;
}