#include <stdio.h>


int main () {
	// Switch Statement
	
	char grade;
	
	printf("Grade: ");
	scanf("%c", &grade);
	
	switch (grade) {
		case 'A':
			printf("Excellent\n");
			break;
		case 'B':
			printf("Very Good\n");
			break;
		case 'C':
			printf("Good\n");
			break;
		default:
			printf("Please Enter A Valid Grade\n");
	}
	
	return 0;
}