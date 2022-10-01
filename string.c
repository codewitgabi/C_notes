#include <stdio.h>
#include <string.h>

int main ()
{
	/*
		: Strings can be created in many different ways
			- As array of characters with double quotes: char string[] = "string";
			-As an array with different strings at different index stored with single quotes: char string[] = {'s', 't', 'r', 'i', 'n', 'g', '\0'}; it should end with \0 to show end of string

		: for strings, object assignment is possible but should be done with single quotes. e.g string[3] = 'o'; => strong.
		
		: traversing a string is possible but the format specifier should be %c instead of %s.
	*/
	
	char string[] = {'c', 'o', 'd', 'e', '\0'};
	char string2[] = "code";
	
	string[2] = 'p';
	
	printf("%s\n", string);
	printf("%s\n", string2);
	
	for (int i = 0; i < strlen(string); i++)
	{
		for (int j = 0; j < i+1; j++)
		{
			printf("%c", string[j]);
		}
		printf("\n");
	}
}