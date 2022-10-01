#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main ()
{
	srand(time(0)); // This is necessary to keep randomizing numbers
	
	int i = 0;
	
	while (i < 50)
	{
		int random_number = rand() % 7; // Generates random number from 0 to 6
		printf("%d\n", random_number);
		i++;
	}
	
	return 0;
}