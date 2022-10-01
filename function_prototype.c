#include <stdio.h>

/*
	:function prototype:
		This ensures that call to a function are made with the correct arguments.
		
		The function is initialized before the main() having the data type of the parameters as parameters rather than the variable name of the parameter.
*/

void prototype (char name[], int age);

int main () {
	
	prototype("codewitgabi", 15);
	
	return 0;
}

void prototype (char name[], int age) {
	printf("My name is %s and I am %d years old\n", name, age);
}