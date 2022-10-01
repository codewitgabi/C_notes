#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void game();

int main()
{
	while (true)
	{
		game();
	}
	
	return 0;
}

void game()
{
	srand(time(0));
	int guess_number = (rand() % 40) + 1;
	int user_guess, guesses = 0;

	printf("********************************\n");
	printf("           Start Game\n");
	printf("********************************\n");

	while (user_guess != guess_number)
	{
		printf("Guess: ");
		scanf("%d", &user_guess);

		guesses++;

		if (user_guess < guess_number) {
			printf("Too low\n");
		} else if (user_guess > guess_number) {
			printf("Too high\n");
		} else {
			printf("\nCorrect!!!\n");
		}
	}

	printf("Guesses: %d\n\n", guesses);
	
}