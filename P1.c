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
        printf("Enter the guessed number : ");
        scanf("%d", &guess);
        count++;
        if (guess > number) 
		{
            printf("The number is very large, please try again.\n");
        } 
		else if (guess < number) 
		{
            printf("The number is very small, please try again.\n");
        } 
		else 
		{
            printf("Congratulations! You guessed the number in %d tries.\n\a", count);
        }
    } 
	while (guess != number);

    return 0;
}