#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    srand(time(0)); 
    number = rand() % 100 + 1; 

    while (1) {
        printf("Enter your guess (1-100): ");
        scanf("%d", &guess);
        attempts++;

        if (guess == number) {
            printf("Correct! You guessed it in %d attempts.\n", attempts);
            break;
        } 
        else if (guess > number) {
            printf("Too high!\n");
        } 
        else {
            printf("Too low!\n");
        }
    }

    return 0;
}

