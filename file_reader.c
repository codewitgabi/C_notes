#include <stdio.h>


int main ()
{
	/*
	// Writing to a file
	
	FILE *pFile = fopen("/storage/emulated/0/output.txt", "w");
	
	fprintf(pFile, "\nHello world");
	
	fclose(pFile);
	*/
	
	// Deleting a file
	
	/*
	if (remove("/storage/emulated/0/output.txt") == 0)
	{
		printf("Deleted!!");
	}
	else
	{
		printf("File Does not exist");
	}
	*/
	
	// Reading a file
	
	FILE *pFileToRead = fopen("/storage/emulated/0/ALX/random.c", "r");
	
	// store file content in char array
	char buffer[1000];
	
	// check if the file exists
	if (pFileToRead == NULL)
	{
		printf("File does not exist!!");
	}
	else
	{
		// read the file
		while (fgets(buffer, 1000, pFileToRead))
		{
			printf("%s", buffer);
		}
	}
	
	fclose(pFileToRead);
	
	return 0;
}