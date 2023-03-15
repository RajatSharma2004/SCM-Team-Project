// Guess The Number(game)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int number, guess, count = 0;
    srand(time(0)); // seed for random number generator
    number = rand() % 100 + 1; // generates a random number between 1 and 100
    printf("Guess the number between 1 and 100\n");

    do 
	{
        printf("Guess a number and enter it here : ");
        scanf("%d", &guess);
        count++;
        if (guess > number) {
            printf("Too high! Try again.\n");
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d tries.\n", count);
        }
    } 
	while (guess != number);

    return 0;
}