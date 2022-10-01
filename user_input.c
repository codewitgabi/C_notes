#include <stdio.h>
#include <string.h>


int main () {
	
	char name[50];
	int age;
	
	printf("Name: ");
	fgets(name, 50, stdin);
	name[strlen(name) - 1] = '\0';
	
	printf("Age: ");
	scanf("%d", &age);
	
	
	printf("Hello %s, Welcome to C Lang.\n", name);
	printf("Never too young or too late to be a programmer @ %d\n", age);
	
	return 0;
}